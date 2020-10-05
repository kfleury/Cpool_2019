/*
** EPITECH PROJECT, 2020
** Day06
** File description:
** my_strncpy.c
*/
char *my_strncpy(char *dest, const char *src, int n)
{
    int i = 0;

    for (; i < n && src[i]; i++)
        dest[i] = src[i];
    dest[n] = '\0';

    return (dest);
}
