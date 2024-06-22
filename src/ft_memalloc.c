/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonanno <abonanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 00:19:52 by abonanno          #+#    #+#             */
/*   Updated: 2024/06/22 00:22:36 by abonanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void			*mem;
	unsigned char	*ptr;
	size_t			i;

	mem = malloc(size);
	if (mem == NULL)
		return (NULL);
	ptr = (unsigned char *) mem;
	i = 0;
	while (i < size)
	{
		ptr[i] = 0;
		i++;
	}
	return (mem);
}
