/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonanno <abonanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 19:26:53 by abonanno          #+#    #+#             */
/*   Updated: 2024/06/27 19:30:42 by abonanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int strcmp(const char *s1, const char *s2)
{
    size_t i = 0;
    while(s1[i] != '\0' && s2[i] != '\0')
    {
        if(s1[i] != s2[i])
            return s1[i]-s2[i];
        i++;
    }
    if(s1[i] != s2[i])
        return s1[i]-s2[i];
    return 0;
}