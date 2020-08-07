/*
** EPITECH PROJECT, 2020
** Cpool_2019
** File description:
** my_print_revalpha.c
*/
void my_putchar(char c);

int my_print_revalpha(void)
{
    for (char i = 'z'; (int) i >= 'a'; my_putchar(i), i--);
    return (0);
}