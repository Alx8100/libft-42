#include "libft.h"
char ft_toupper_wrapper(char c)
{
    return (char)ft_toupper((int)c);
}
char ft_shift_idx(unsigned int index, char c)
{
    //shifta la lettera in base di idx posizioni
    return c + index;
}


int main(int argc, char **argv)
{
    printf("%s\n", "hello, world!");
    printf("%s\n",ft_strmap("hello, world!", &ft_toupper_wrapper));
    printf("%s\n", "hello, world!");
    printf("%s\n",ft_strmapi("hello, world!", &ft_shift_idx));
    printf("%i\n",ft_strequ("ciaobro","ciaobro"));
    printf("%i\n",ft_strequ("ciaobro","ciaobro1"));
    printf("%i\n",ft_strnequ("ciaobro","ciaobro",7));
    printf("%i\n",ft_strnequ("ciaobro","ciaobro1",8));
    printf("%i\n",ft_strnequ("ciaobro","ciaobro1",7));
    printf("%s\n", ft_strsub("hello, world!", 7, 12));
    printf("%s\n", ft_strjoin("hello, ","world!"));
    printf("%s\n",ft_strtrim("      hello, world!       "));
    printf("%i\n", 4);
    char **matrx = ft_strsplit("ciao*mondo*come*va*",'*');
    int i = 0;
    while(i < 2)
    {
        printf("%s\n", matrx[i]);
        i++;
    }
}