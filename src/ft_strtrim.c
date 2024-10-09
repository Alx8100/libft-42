/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonanno <abonanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 23:53:28 by abonanno          #+#    #+#             */
/*   Updated: 2024/10/09 00:18:19 by abonanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isspace(char s)
{
    if (s == ' ' || s == '\n' || s == '\t')
        return 1;
    return 0;
}

char    *ft_strtrim(char const *s)
{
    size_t start;
    size_t end;
    size_t i;
    char *app;

    end = ft_strlen((char *) s);
    while(ft_isspace(s[end]) == 1)
        end--;
    start = 0;
    while(ft_isspace(s[start]))
        start++;
    app = (char *) malloc (sizeof(char)*(end - start + 1));
    if(app == NULL)
        return NULL;
    i = 0;
    while(i < end)
    {
        app[i] = s [start + i];
        i++;
    }
    app[i] = '\0';
    return app;
}
