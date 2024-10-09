/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonanno <abonanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 23:35:04 by abonanno          #+#    #+#             */
/*   Updated: 2024/10/08 23:51:10 by abonanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t len;
    char *app;

    len = ft_strlen((char *) s1) + ft_strlen((char *) s2);
    app = (char *)malloc(sizeof(char)*(len + 1));
    if (app == NULL)
        return NULL;
    app = ft_strcat((char *) app, (char *)s1);
    app = ft_strcat((char *)app, (char *)s2);
    app[len] = '\0';
    return app;
}
