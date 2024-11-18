/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonanno <abonanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:12:09 by abonanno          #+#    #+#             */
/*   Updated: 2024/11/14 01:01:42 by abonanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*app;

	app = (char *)malloc(sizeof(char) * (size + 1));
	if (app == NULL)
		return (NULL);
	app = ft_memset(app, '\0', size + 1);
	return (app);
}
/*int main()
{
    char * app = ft_strnew(10);
    printf("%s","helloworld");
    return 0;
}*/