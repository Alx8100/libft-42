/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonanno <abonanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:22:50 by abonanno          #+#    #+#             */
/*   Updated: 2024/11/18 09:24:34 by abonanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_swap(char *app)
{
	int		i;
	char	c;
    int		len;

	len = strlen(app);
	i = 0;
	while (i < len/2)
	{
		c = app[i];
		app[i] = app[len - i - 1];
		app[len- i - 1] = c;
		i++;
	}
	return (app);
}
int ft_intlen(int n)
{
    int i;
	
	i = 0;
	if (n == 0)
		return 1;
	if (n < 0)
	n = -n;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}
char    *ft_itoa(int n)
{
    char    *app;
    int    isNegative;
    size_t i;
    
    app = (char *) malloc(sizeof(char) * (ft_intlen(n)+1));    
    if(n == 0)
    {
        app[0] = 0;
        app[1] = '\n';
        return app;
    }
    if (n < 0)
    {
        isNegative = 1;
        n = -n;
    }
    i = 0;
    while (n != 0)
    {
        app[i] = n % 10 + '0';
        n = n / 10;
        i++;
        write(STDOUT_FILENO,&app[i],1);
    }
    if (isNegative == 1)
    {
        app[i] = '-';
        i++;
    }
    app = ft_swap(app);
    app[i]='\0';
    return app;
}
