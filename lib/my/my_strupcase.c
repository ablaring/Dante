/*
** EPITECH PROJECT, 2022
** my_strupcase.c
** File description:
** task08
*/
#include "my.h"

char * my_strupcase ( char * str )
{
    int i = 0;
    for (i; str[i] != '\0'; i++){
        if (str[i] >= 97 && str[i] <= 122){
            str[i] = str[i] - 32;
        }
    }
    return str;
}
