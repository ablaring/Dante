/*
** EPITECH PROJECT, 2022
** my_strncat.c
** File description:
** task03
*/
#include "my.h"

char * my_strncat ( char * dest , char const * src , int nb )
{
    int i = 0 ;
    int j = 0 ;
    for (i; dest[i] != '\0'; i++);
    for (j; j < nb; j++, i++){
        dest[i] = src[j];
    }
    return ( dest );
}
