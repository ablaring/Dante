/*
** EPITECH PROJECT, 2022
** my_strncpy.c
** File description:
** task02
*/
#include "my.h"

char longueur(char const *str)
{
    int i = 0;
    for (; str[i] != '\0'; i++);
    return i;
}

char * my_strncpy ( char * dest , char const * src , int n )
{
    int k = 0;
        for (int i = 0; i < n; i++){
            dest[i] = src[i];
            k++;
        }
        if (n > longueur(src)){
            dest[k] = '\0';
        }
        return dest;
}
