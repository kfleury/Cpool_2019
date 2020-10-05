/*
** EPITECH PROJECT, 2020
** Day07
** File description:
** my_putstr.c
*/
#include <unistd.h>

int my_strlen(char *str);

void my_putstr(char *str)
{
    write(1, str, my_strlen(str));
}