#include "libft.h"
void *ft_memccpy(void *dest, const void *src, int c, unsigned long int n)
{	
	unsigned char *s1 = (unsigned char *) dest;
	unsigned char *s2 = (unsigned char *) src;
	unsigned long int i = 0;
	while (i < n)
	{
		s1[i] = s2[i];
		if(s2[i] == (unsigned char) c)
		{
			return (void *)(s1+i+1);
		}
		i++;
	}
	return (NULL);
}