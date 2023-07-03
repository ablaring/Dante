/*
** EPITECH PROJECT, 2022
** my_printf.c
** File description:
** my_printf
*/

#include "my.h"

int flag(char *format, va_list list, int i)
{
    if (format[i + 1] == 'S')
        my_putstr_modified(va_arg(list, char*), list);
    if (format[i + 1] == 'n')
        boucle_n(list, format);
    if (format[i + 1] == 'd' || format[i + 1] == 'i')
        my_put_nbr(va_arg(list, int));
    if (format[i + 1] == 'f' || format[i + 1] == 'F')
        transf_float(va_arg(list, double), 0);
    if (format[i + 1] == 'g' || format[i + 1] == 'G')
        transf_g(va_arg(list, double));
    if (format[i + 1] == 'u')
        my_putnbr_signed(va_arg(list, int unsigned));
    if (format[i + 1] == 's')
        my_putstr(va_arg(list, char*));
    if (format[i + 1] == 'o')
        convertisseur_octal(list);
    i = flag_second(format, list, i, 0);
    i = flag_third(format, list, i, 0);
    return i + 2;
}

int flag_second(char *format, va_list list, int i, int number)
{
    if (format[i + 1] == '+')
        i = modifier(format, list, i);
    if (format[i + 1] == ' ')
        i = espace(format, list, i);
    if (format[i + 1] == 'x')
        hexadecimal(va_arg(list, int));
    if (format[i + 1] == 'X')
        alpha_hexadecimal(va_arg(list, int));
    if (format[i + 1] == 'p')
        ptr_hexadecimal(va_arg(list, int));
    if (format[i + 1] == '%')
        my_putchar('%');
    if (format[i + 1] == 'b')
        flag_b(va_arg(list, int));
    if (format[i + 1] == 'c')
        my_putchar(va_arg(list, int));
    if (format[i + 1] == 'e' || format[i + 1] == 'E')
        transf_float_puissance(va_arg(list, double));
    return i;
}

int flag_third(char *format, va_list list, int i, int number)
{
    if (format[i + 1] == '.' || format[i + 1] >= '0' && format[i + 1] <= '9'){
        i = chase_number(list, i, format);
        precision(format, i, list);
}
    if (format[i + 1] == '#'){
        my_putstr("0x");
    if (format[i + 2] == 'x')
        hexadecimal(va_arg(list, int));
    if (format[i + 2] == 'X')
        alpha_hexadecimal(va_arg(list, int));
    i++;
}
    return i;
}

int check_error(char *format, int i)
{
    if (format[i + 1] != 'd' && format[i + 1] != 'i' &&
    format[i + 1] != 's' && format[i + 1] != 'c' &&
    format[i + 1] != '%' && format[i + 1] != 'o' &&
    format[i + 1] != 'n' && format[i + 1] != 'S' &&
    format[i + 1] != 'b' && format[i + 1] != 'a' &&
    format[i + 1] != 'g' && format[i + 1] != 'G' &&
    format[i + 1] != 'e' && format[i + 1] != 'E' &&
    format[i + 1] != 'x' && format[i + 1] != 'X' &&
    format[i + 1] != 'p')
        return 84;
}

int my_printf (char *format , ...)
{
    va_list list;
    va_start(list, format);
    int nb = 0;
    for (int i = 0; format[i];) {
        while (format[i] && format[i] != '%') {
            my_putchar(format[i]);
            i++;
        }
        if (format[i] == '\0'){
            break;
        }
        check_error(format, i);
        i = flag(format, list, i);
        va_end(list);
    }
}
