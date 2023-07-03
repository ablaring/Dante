/*
** EPITECH PROJECT, 2022
** my_strcat.c
** File description:
** task02
*/
#include "my.h"

char * my_strcat ( char * dest , char const * src )
{
    int i = 0 ;
    int j = 0 ;
    for (i; dest[i] != '\0'; i++);
    for (j; src[j] != '\0'; j++){
        dest[i] = src [j];
        i ++ ;
    }
    dest[i] = '\0' ;
    return ( dest );
}
