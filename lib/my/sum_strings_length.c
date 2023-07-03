/*
** EPITECH PROJECT, 2022
** sum_strings_length.c
** File description:
** sum
*/
#include "my.h"

int sum_strings_length( int n , ...)
{
    va_list ap;
    char *s;
    int k;
    int somme = 0;
    va_start(ap, n);
    for (int i = 0; i < n; i++){
        s = va_arg(ap, char *);
        for (k = 0; s[k] != '\0'; k++);
        somme += k;
    }
    va_end(ap);
    return somme;
}
