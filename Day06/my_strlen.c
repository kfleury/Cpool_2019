/*
** EPITECH PROJECT, 2020
** Day07
** File description:
** my_strlen.c
*/

int my_strlen(char *str)
{
    return (*str ? my_strlen(str + 1) + 1 : 0);
}