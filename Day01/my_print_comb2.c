/*
** EPITECH PROJECT, 2020
** Cpool_2019
** File description:
** my_print_comb2.c
*/
void my_putchar(char c);

void printing(char a, char b, char c, char d)
{
    my_putchar(a);
    my_putchar(b);
    my_putchar(' ');
    my_putchar(c);
    my_putchar(d);
    my_putchar(',');
    my_putchar(' ');
}

void incr(char a, char *b, char *c, char *d)
{
    if (*c == '9' && *d == '9') {
        (*b)++;
        *c = a;
        *d = *b;
    }
    if (*d == '9') {
        (*c)++;
        *d = '/';
    }
}

void loop(char a, char b, char c, char d)
{
    for (; 1; d++) {
        if (a == '9' && b == '8' && c == '9' && d == '9')
            return;
        printing(a, b, c, d);
        if (b == '9' && c == '9' && d == '9') {
            a++;
            b = '0';
            c = a;
            d = '0';
        }
        incr(a, &b, &c, &d);
    }
}

int my_print_comb2(void)
{
    char a = '0';
    char b = '0';
    char c = '0';
    char d = '1';

    loop(a, b, c, d);
    my_putchar('9');
    my_putchar('8');
    my_putchar(' ');
    my_putchar('9');
    my_putchar('9');
    return (0);
}
