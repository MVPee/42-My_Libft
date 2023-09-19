/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvpee <mvpee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:42:54 by mvpee             #+#    #+#             */
/*   Updated: 2023/09/19 18:21:03 by mvpee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main() {
    char str[] = "Bonjour, le monde!";
    char *result;

    // Recherche de la première occurrence de 'l' dans str
    result = ft_memchr(str, 'l', strlen(str));

    if (result != NULL) {
        printf("Le caractère 'l' a été trouvé à la position %ld\n", result - str);
    } else {
        printf("Le caractère 'l' n'a pas été trouvé dans la chaîne.\n");
    }

    return 0;
}