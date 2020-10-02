/*
** EPITECH PROJECT, 2020
** Day07
** File description:
** my_sort_params.c
*/
#include <stdio.h>

void my_putstr(char *str);

char **my_sort_params(int ac, char **av)
{
    char *temp = NULL;


    for (int i = 0; i < ac - 1; i++)
        for (int j = 0; j < ac - i - 1; j++) {
            if (av[j][0] > av[j+1][0]) {
                temp = av[j];
                av[j] = av[j+1];
                av[j+1] = temp;
            }
        }
    return (av);
}

int main(int ac, char **av)
{
    for (av = my_sort_params(ac, av); *av; my_putstr("\n"), av++)
        my_putstr(*av);
    return (0);
}