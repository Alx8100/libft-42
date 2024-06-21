#include "libft.h"
void	*ft_bzero(void *str, unsigned long int n)
{
	unsigned long int i = 0;
	unsigned char *ptr = (unsigned char *)str;
	while(i < n)
	{
		ptr[i] = '\0';
		i++;
	}
	return str;
}