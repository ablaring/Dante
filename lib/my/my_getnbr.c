/*
** EPITECH PROJECT, 2022
** my_getnbr.c
** File description:
** my_getnbr
*/
#include "my.h"

int power(int pow)
{
    int res = 1;
    for (int i = 0; i < pow; i++)
        res *= 10;
    return res;
}

int int_at(int index, char *str)
{
    char c = str[index];
    return (c - '0');
}

int str_int(char *str, int size, int moins)
{
    int res = 0;
    if (size > 10) return 0;
    for (int i = 0; i < size; i++)
    res += power(size - i - 1) * int_at(i, str);
    if (moins == 1) res *= (-1);
    if (res > 2147483647 || res < -2147483648)
    return 0;
    return (int)res;
}

int my_getnbr(char *str)
{
    int debut = 0;
    for (;str[debut] < 48 || str[debut] > 57; debut++);
    int fin = debut + 1;
    for (; str[fin] >= 48 && str[fin] <= 57; fin ++);
    int moins = 0;
    if (debut != 0 && str[debut - 1] == '-')
    moins = 1;
    char num[fin - debut];
    int j = 0;
    for (int i = debut; i < fin; i++, j++)
        num[j] = str[i];
    return str_int(num, j, moins);
}
