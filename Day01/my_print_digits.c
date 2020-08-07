/*
** EPITECH PROJECT, 2020
** Cpool_2019
** File description:
** my_print_digits.c
*/

void my_putchar(char c);

int my_print_digits(void)
{
    for (char i = '0'; (int) i <= '9'; my_putchar(i), i++);
    return (0);
}