#include "libft.h"

void * ft_memalloc(size_t size)
{
    void *mem = malloc(size);
    if(mem == NULL)
        return NULL;
    unsigned char *ptr = (unsigned char *) mem;
    size_t i = 0;
    while (i < size)
    {
        ptr[i] = 0;
        i++;
    }
    return mem;
}