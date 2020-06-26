/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmdluli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 09:09:56 by tmdluli           #+#    #+#             */
/*   Updated: 2020/06/26 09:10:00 by tmdluli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int *ft_range(int min, int max)
{
    int *a;
    int i;

    if (min >= max)
        return (0);
    a = malloc((max - min) * sizeof(int));
    if (a == NULL)
        return (a);
    i = 0;
    while (min < max)
    {
        a[i++] = min;
        ++min;
    }
    
    return (a);
}
