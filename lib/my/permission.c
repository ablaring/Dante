/*
** EPITECH PROJECT, 2022
** permission.c
** File description:
** permission
*/
#include "my.h"

void permission(int a, int b, int c, int d)
{
    if (a)
        my_putchar('d');
    else
        my_putchar('-');
    if (b)
        my_putchar('r');
    else
        my_putchar('-');
    if (c)
        my_putchar('w');
    else
        my_putchar('-');
    if (d)
        my_putchar('x');
    else
        my_putchar('-');
}

void permission_deux(int a, int b, int c, int e)
{
    if (e)
        my_putchar('r');
    else
        my_putchar('-');
    if (a)
        my_putchar('w');
    else
        my_putchar('-');
    if (b)
        my_putchar('x');
    else
        my_putchar('-');
    if (c)
        my_putchar('r');
    else
        my_putchar('-');

}

void permission_third(int d, int e)
{
    if (d)
        my_putchar('w');
    else
        my_putchar('-');
    if (e)
        my_putchar('x');
    else
        my_putchar('-');
}
