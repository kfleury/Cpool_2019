/*
** EPITECH PROJECT, 2020
** my lib 2019
** File description:
** my_strstr.c
*/
int my_strlen(char *str);
char *my_strncmp(char *, char *, int);

char *my_strstr(char *s1, char *s2)
{
    for (int i = 0; s1[i]; i++) {
        if (s1[i] == s2[0]) {
            if (my_strncmp(s1, s2, my_strlen(s2)) == 0)
                return ((char *) &s1[i]);
        }
    }
    return (NULL);
}