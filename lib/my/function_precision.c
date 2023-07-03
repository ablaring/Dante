/*
** EPITECH PROJECT, 2022
** function_precision.c
** File description:
** function_precision
*/

#include "my.h"

void precision(char *format, int i, va_list list)
{
float reste = 0;
int chiffre = my_getnbr(format);
if (format[i + 1] == 'd' || format[i + 1] == 'i'){
int zero = va_arg(list, int);
if (zero < 0){
my_putchar('-');
zero *= (-1);
}
int t = 1;
int temp = zero;
for (t; temp > 1; t++)
temp /= 10;
for (int i = 0; i < chiffre - t + 1; i++)
my_putchar('0');
my_put_nbr(zero);
}
precision_suite(format, i, list);
}

void precision_suite(char *format, int i, va_list list)
{
float reste = 0;
int chiffre = my_getnbr(format);
if (format[i + 1] == 'f' || format[i + 1] == 'F' ||
    format[i + 1] == 'g' || format[i + 1] == 'G'){
    reste = transf_float(va_arg(list, double), 1) / 100000;
    for (int j = 0; j < 9 - 1; j++)
    reste *= 10;
    my_put_nbr(reste);
    for (int k = 0; k < chiffre - 9; k++)
    my_putchar('0');
}
if (format[i + 1] == 's'){
if (my_strlen(format) > chiffre)
my_putstr_tree(va_arg(list, char*), chiffre);
else
my_putstr(va_arg(list, char*));
}
}
