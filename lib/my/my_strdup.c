/*
** EPITECH PROJECT, 2022
** my_strdup.c
** File description:
** task01
*/
#include "my.h"

char * my_strdup ( char const * src )
{
    int i = 0;
    int j = 0;
    for (i;src[i] != '\0'; i++);
    char *str = malloc(i + 1);
    for (j;src[j] != '\0'; j++){
        str[j] = src [j];
    }
    str[j] = '\0';
    return str;
}
