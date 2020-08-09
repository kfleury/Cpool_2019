/*
** EPITECH PROJECT, 2020
** Cpool_2019
** File description:
** my_put_nbr.c
*/
void my_putchar(char c);

int my_put_nbr(long long n)
{
    if (n < 0) {
        my_putchar('-');
        n *= -1;
    }
    if (n >= 10) {
        my_put_nbr(n / 10);
        n %= 10;
    }
    my_putchar((char) (n + 48));
    return (0);
}
