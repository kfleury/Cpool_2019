/*
** EPITECH PROJECT, 2020
** my lib 2019
** File description:
** my_strncmp.c
*/

int my_strncmp(char *s1, char *s2)
{
    int i = 0;

    for (; s1[i] == s2[i] && s1[i] && s2[i]; i++);
    if (s1[i] == '\0' && s2[i] == '\0')
        return (0);
    else if (s1[i] > s2[i])
        return (1);
    else
        return (-1);
}
