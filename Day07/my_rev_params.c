/*
** EPITECH PROJECT, 2020
** Day07
** File description:
** my_rev_params.c
*/
void my_putstr(char *str);

int main(int ac, char **av)
{
    for (int i = ac-1; i >= 0; my_putstr("\n"), i--)
        my_putstr(av[i]);
    return (0);
}