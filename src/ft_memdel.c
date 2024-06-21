#include "libft.h"
void memdel(void **app)
{
    if (app == NULL)
        return;
    size_t i = 0;
    while (app[i])
    {
        free(app[i]);
        app[i] = NULL;
        i++;
    }
    free(app);
    app = NULL;
}