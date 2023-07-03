/*
** EPITECH PROJECT, 2022
** my_put_nbr.c
** File description:
** my_put_nbr
*/
#include "my.h"

int my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    if (nb >= 10) {
        my_put_nbr (nb / 10);
    }
    my_putchar('0' + nb % 10);
    return 0;
}

int my_putnbr_signed(long unsigned nb)
{
    int temp = nb;
    if (nb < 0) {
        nb = 4294967296;
        my_putnbr_signed(nb);
    }
    if (nb >= 10)
        my_putnbr_signed(nb / 10);
    my_putchar('0' + nb % 10);
    return 0;
}

int my_put_float(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    if (nb >= 10) {
        my_put_nbr (nb / 10);
    }
    my_putchar('0' + nb % 10);
    return 0;
}
