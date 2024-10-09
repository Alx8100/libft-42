/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonanno <abonanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 23:26:39 by abonanno          #+#    #+#             */
/*   Updated: 2024/10/08 23:33:57 by abonanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
    char *app;
    size_t i;

    app = (char *) malloc (sizeof(char) * (len + 1));
    if(app == NULL)
        return NULL;
    i = 0;
    while(i < len)
    {
        app[i] = s[start + i];
        i++;
    }
    app[i] = '\0';
    return app;
}
