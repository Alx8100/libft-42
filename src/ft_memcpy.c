#include "libft.h"
void *ft_memcpy(void *dest,void *src,unsigned long int n)
{
	unsigned char *s1 = (unsigned char *) dest;
	unsigned char *s2 = (unsigned char *) src;
	unsigned long int i = 0;
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	return dest;
}