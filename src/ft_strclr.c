#include "libft.h"
void ft_strclr(char *s)
{
    if (s == NULL)
        return;
    size_t i = 0;
    size_t size = ft_strlen(s);
    while(i < size)
    {
        s[i] = '\0';
        i++;
    }
}