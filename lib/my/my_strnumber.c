/*
** EPITECH PROJECT, 2023
** my_strnumber.c
** File description:
** desc
*/
#include "my.h"

char *my_nbr_text(int score)
{
    char *str = malloc(sizeof(char) * 10);
    int i = 0;
    for (; score > 0; i++){
        str[i] = score % 10 + 48;
        score = score / 10;
    }
    str[i] = '\0';
    return (str);
}

char *my_itoa(int nb)
{
    int i = 0;
    int j = 0;
    char *str = malloc(sizeof(char) * 100);
    int nb2 = nb;
    while (nb2 > 0) {
        nb2 = nb2 / 10;
        i++;
    }
    str[i] = '\0';
    while (nb > 0) {
        str[i - 1] = nb % 10 + 48;
        nb = nb / 10;
        i--;
    }
    return (str);
}
