/*
** EPITECH PROJECT, 2020
** Cpool_2019
** File description:
** my_print_alpha.c
*/
void my_putchar(char c);

int my_print_alpha(void)
{
    for (char i = 'a'; (int) i <= 'z'; my_putchar(i), i++);
    return (0);
}