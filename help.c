#include "header.h"
#include <stdlib.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    write(1, str, i);
}

char *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

char *ft_void()
{
    char *empty_string;

    empty_string = (char *)malloc(sizeof(char));
    if (empty_string == NULL)
        return (0);
    empty_string[0] = '\n';
    return (empty_string);
}