/*
** EPITECH PROJECT, 2019
** my_strcpy
** File description:
** copies a string into another
*/
char *my_strcpy(char *dest, char const *src)
{
    int j;

    for (j = 0; src[j]; j++)
        dest[j] = src[j];
    dest[j] = '\0';
    return (dest);
}
