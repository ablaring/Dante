/*
** EPITECH PROJECT, 2022
** function_padding.c
** File description:
** padding
*/

#include "my.h"

void flag_b(int n)
{
int e = 0;
int p = 1;
if (n < 0){
    n = -n;
    my_putchar('-');
}
while (n != 0) {
    e += (n % 2) * p;
    n = n / 2;
    p *= 10;
}
my_put_nbr(e);
}

int chase_number(va_list list, int i, char *format)
{
    int number = my_getnbr(format);
    int temp = number;
    int k = 0;
    for (k; temp > 1; k++)
    temp /= 10;
    if (format[i + 2 + k] == 'f' || format[i + 2 + k] == 'F'
    || format[i + 2 + k] == 'g' || format[i + 2 + k] == 'G'
    || format[i + 2 + k] == 's')
        precision(format, i, list);
    return i + k + 1;
}

int modifier(char *format, va_list list, int i)
{
        int n = va_arg(list, int);
        if (n >= 0){
            my_putchar('+');
            i++;
            if (format[i + 1] == 'd' || format[i + 1] == 'i')
                my_put_nbr(n);
            if (format[i + 1] == ' '){
                i++;
                my_put_nbr(n);
            }
        }
        if (n < 0){
            i++;
            my_put_nbr(n);
        }
    return i;
}

int espace(char *format, va_list list, int i)
{
    int k = 0;
    while (format[i + 1] == ' '){
        k++;
        i++;
    }
    my_putchar(' ');
    flag(format, list, i);
    return i;
}
