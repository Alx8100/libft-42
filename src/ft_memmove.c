#include "libft.h"

void *ft_memmove(void *dest, const void *src, unsigned long int n)
{
	unsigned char *s1 = (unsigned char *) dest;
	unsigned char *s2 = (unsigned char *) src;
	unsigned char *arr = (unsigned char *) malloc(sizeof(unsigned char) * ft_strlen(s2));
	unsigned long int i = 0;
	while(i < n)
	{
		arr[i] = s2[i];
		i++;
	}
	i = 0;
	while(i < n)
	{
		s1[i] = arr[i];
		i++;
	}
	return dest;
}
