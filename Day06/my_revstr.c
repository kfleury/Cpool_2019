/*
** EPITECH PROJECT, 2020
** Day06
** File description:
** my_revstr.c
*/
int my_strlen(char *str);

void my_swap(char *a, char *b)
{
    char temp = *a;

    *a = *b;
    *b = temp;
}

char *my_revstr(char *str)
{
    int decount = 0;
    int count = my_strlen(str) - 1;

    while (count >= decount) {
        my_swap(&str[count], &str[decount]);
        decount++;
        count--;
    }
    return (str);
}
