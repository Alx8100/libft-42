/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonanno <abonanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 22:15:00 by abonanno          #+#    #+#             */
/*   Updated: 2024/10/08 22:23:06 by abonanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t size;
    size_t i;
    char *app;

    size = ft_strlen((char *) s);
    app = (char *)malloc(sizeof(char) * (size + 1));
    if (app == NULL)
        return NULL;
    i = 0;
    while (s[i] != '\0')
    {
        app[i] = (f)(i, s[i]);
        i++;
    }
    app[i] = '\0';
    return app;
}