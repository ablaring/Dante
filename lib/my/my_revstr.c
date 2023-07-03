/*
** EPITECH PROJECT, 2022
** my_revstr.c
** File description:
** task03
*/
#include "my.h"

char * my_revstr ( char * str )
{
    int k = 0;
    int j = 0;
    char reverse;
    for (int i = 0; i < str[i]; i++){
        k++;
    }
    k--;
    for (int i = 0; i <= k; i++){
        reverse = str[k];
        str[k] = str[j];
        str[j] = reverse;
        k--;
        j++;
    }
    return str;
}
