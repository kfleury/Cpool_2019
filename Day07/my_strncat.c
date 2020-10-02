/*
** EPITECH PROJECT, 2020
** Day07
** File description:
** my_strncat.c
*/
int my_strlen(char *str);

char *my_strncat(char *dest, char const *src, int n)
{
    int dest_len = my_strlen(dest);
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[dest_len + i] = src[i];
    dest[dest_len + i] = '\0';

    return (dest);
}
