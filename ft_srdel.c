#include "libft.h"
void ft_strdel(char **as)
{
    size_t i = 0;
    if (as == NULL || *as == NULL)
        return;
    free(*as);
    *as = NULL;
}