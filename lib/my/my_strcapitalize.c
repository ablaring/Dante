/*
** EPITECH PROJECT, 2022
** my_strcapitalize.c
** File description:
** task10
*/
#include "my.h"
char * my_strcapitalize ( char * str )
{
    int i = 0;
    for (i; str[i] != '\0'; i++){
        if (str[i] >= 97 && str[i] <= 122){
            str[i] = str[i] - 32;
        }
    }
    str[i] = '\0';
    return str;
}
