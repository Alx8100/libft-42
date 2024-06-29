/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonanno <abonanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 10:19:36 by abonanno          #+#    #+#             */
/*   Updated: 2024/06/26 10:29:17 by abonanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	int		i;
	int		pos;

	i = 0;
	pos = -1;
	ch = (char) c;
	while (s[i])
	{
		if (s[i] == ch)
			pos = i;
		i++;
	}
	if (pos != -1)
		return ((char *)&s[pos]);
	if (s[i] == ch)
		return ((char *)&s[i]);
	return (NULL);
}
