/*
** EPITECH PROJECT, 2020
** Day07
** File description:
** my_print_params.c
*/

void my_putstr(char *str);

int main(int ac, char **av)
{
    for (;*av; my_putstr("\n"), av++)
        my_putstr(*av);
    return (0);
}