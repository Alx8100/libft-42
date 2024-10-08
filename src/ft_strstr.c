/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonanno <abonanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 10:31:03 by abonanno          #+#    #+#             */
/*   Updated: 2024/09/26 10:12:34 by abonanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_find_haystack(const char *haystack, const char *needle)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (haystack[i])
	{
		if (haystack[i] == needle[j])
		{
			while (haystack[i + k] == needle[j])
			{
				k++;
				j++;
			}
			k = 0;
			if (j == ft_strlen((char *)needle))
				return ((char *)&haystack[i]);
			j = 0;
		}
		i++;
	}
	return (NULL);
}

char	*ft_strstr(const char *haystack, const char *needle)
{
	if (ft_strlen((char *)needle) == 0)
		return ((char *)haystack);
	return (ft_find_haystack(haystack, needle));
}

/*int main(int argc, char **argv)
{
	char *needle = ft_strstr("hello, world!", "world");
	printf("%s", needle);
	needle = ft_strstr("hello, world!123", "world");
	printf("%s", needle);
	needle = ft_strstr("hello, world!123", "");
	printf("%s", needle);
}*/
