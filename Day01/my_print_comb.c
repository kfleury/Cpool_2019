/*
** EPITECH PROJECT, 2020
** Cpool_2019
** File description:
** my_print_comb.c
*/
void my_putchar(char c);

void print(char a, char b, char c)
{
    my_putchar(a);
    my_putchar(b);
    my_putchar(c);
    my_putchar(',');
    my_putchar(' ');
}

void main_loop(char a, char b, char c)
{
    for (; 1; c++) {
        if (a == '7' && b == '8' && c == '9')
            return;
        print(a, b, c);
        if (b == '8') {
            a++;
            b = a;
        }
        if (c == '9') {
            b++;
            c = b;
        }
    }
}

int my_print_comb(void)
{
    char a = '0';
    char b = '1';
    char c = '2';

    main_loop(a, b, c);
    my_putchar('7');
    my_putchar('8');
    my_putchar('9');
    return (0);
}