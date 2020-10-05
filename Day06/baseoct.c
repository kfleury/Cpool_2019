/*
** EPITECH PROJECT, 2019
** my_putnbr_base
** File description:
** put base
*/
#include <unistd.h>

int my_strlen(char *);

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putnbr_base(int nbr, char *base)
{
    unsigned long long i = 0;
    unsigned long long j = 0;
    if (nbr < 0) {
        my_putchar('-');
        nbr = -nbr;
    }
    i = nbr / my_strlen(base);
    j = nbr % my_strlen(base);
    if (i > 0)
        my_putnbr_base(i, base);
    my_putchar(base[j]);
    return (0);
}
