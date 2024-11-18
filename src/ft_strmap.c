/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonanno <abonanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 21:02:09 by abonanno          #+#    #+#             */
/*   Updated: 2024/11/18 09:17:37 by abonanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	size;
	size_t	i;
	char	*app;

	size = ft_strlen((char *) s);
	app = (char *)malloc(sizeof(char) * (size + 1));
	i = 0;
	while (s[i] != '\0')
	{
		app[i] = (f)(s[i]);
		i++;
	}
	app[i] = '\0';
	return (app);
}
