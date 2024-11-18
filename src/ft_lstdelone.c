/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonanno <abonanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 01:31:53 by abonanno          #+#    #+#             */
/*   Updated: 2024/11/14 01:09:32 by abonanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*temp;

	temp = (*alst)-> next;
	if (alst == NULL || *alst == NULL)
		return ;
	del((*alst)-> content, (*alst)-> content_size);
	free(*alst);
	*alst = NULL;
	(*alst) = temp;
}
