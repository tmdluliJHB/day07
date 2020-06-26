/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmdluli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 09:09:35 by tmdluli           #+#    #+#             */
/*   Updated: 2020/06/26 09:09:42 by tmdluli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strlen(char *c)
{
    int i;

    i = 0;
    while (c[i] != '\0')
        i++;
    return (i);
}

char *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        ++i;
    }
    dest[i] = '\0';
    return (dest);
}

char *ft_strdup(char *src)
{
    char *dest;

    dest = malloc((ft_strlen(src) + 1) * sizeof(char));
    
    ft_strcpy(dest, src);
    
    return (dest);
    
}
