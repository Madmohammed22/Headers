#include <stdlib.h>
#include "header.h"

char *ft_strdup(char *src)
{
    if (src == NULL)
        return ft_void();
    int length;
    char *new_src;
    length = ft_strlen(src);
    new_src = (char *)malloc(sizeof(char) * (length + 1));
    if (new_src == NULL)
        return (0);

    ft_strcpy(new_src, src);
    return (new_src);
    free(new_src);
}

int main()
{
    char src[] = "say hello to my friend.\n";
    char *result = ft_strdup(src);
    ft_putstr(result);
    return (0);
}
