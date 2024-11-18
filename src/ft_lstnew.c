/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonanno <abonanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 00:50:26 by abonanno          #+#    #+#             */
/*   Updated: 2024/10/12 15:27:04 by abonanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstnew(void const *content, size_t content_size)
{
    t_list *app;

    app = (t_list *) malloc(sizeof(t_list) * 1);
    if(app == NULL)
    {
        free(app);
        return NULL;
    }
    if (content == NULL)
    {
        app -> content = NULL;
        app -> content_size = 0;
    }
    app -> content = malloc(content_size);
    if (app == NULL)
    {
        free(app);
        return NULL;
    }
    ft_memcpy(app -> content,(void *) content, content_size);
    app -> content_size = content_size;
    app -> next = NULL;
    return app;
}
