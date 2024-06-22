/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonanno <abonanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 00:04:17 by abonanno          #+#    #+#             */
/*   Updated: 2024/06/22 00:29:48 by abonanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	memdel(void **app)
{
	size_t	i;

	i = 0;
	if (app == NULL)
		return ;
	while (app[i])
	{
		free(app[i]);
		app[i] = NULL;
		i++;
	}
	free(app);
	app = NULL;
}
