/*
** EPITECH PROJECT, 2022
** my_str_isnum.c
** File description:
** task13
*/

#include "my.h"

int my_str_isnum ( char const * str )
{
    int i = 0;
    int tour = 0;
    for (i;  str[i] != '\0';   i++){
        if (str[i] >= 48 && str[i] <= 57)
            tour++;
        else
            return (0);
    }
    return (1);
}
