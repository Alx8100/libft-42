/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonanno <abonanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 00:26:24 by abonanno          #+#    #+#             */
/*   Updated: 2024/10/09 08:36:50 by abonanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int    ft_findnwrld(char const *s, char c)
{
    int wrld;
    size_t i;

    wrld = 0;
    i = 0;
    while(s[i] != '\0')
    {
        if(s[i] != c && s[i+1] == c)
            wrld++;
        i++;
    }
    return wrld;
}
/*char    **ft_app_strsplit()
{
    
}*/
char    **ft_strsplit(char const *s, char c)
{
    char **app; //var matrx
    int     i; //variabili idx matrx
    int     k; //variabile idx stringa *s
    int end;
    int start;
    int wrld;

    wrld = ft_findnwrld(s,c);
    app = (char **)malloc(sizeof(char *) * (wrld+1)); //malloc per matrice
    if(app == NULL) //protezione malloc
        return NULL;
    app[wrld]=NULL; //'\0' fine matrice
    k = 0; //iniz. idx stringa
    i = 0; //iniz. idx array di stringhe
    while(i < wrld) //finchè stiamo all'interno della matrice
    {
        start = k; //prende la posizione di inizio
        while(s[k] != c)//finchè la stringa è diversa da c
        {
            end = k; //prende la posizione di fine della stringa
            k++; //incrementa la k
        }
        
        if (s[k] == c && k != 0)
        {
            app[i] = ft_strsub(s,start,end-start + 1);
            if(*app == NULL)
            {
                return NULL;
            }
        }
        while(s[k] == c)
            k++;
        i++;
    }
    return app;
}
