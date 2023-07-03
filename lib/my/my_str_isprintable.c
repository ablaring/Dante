/*
** EPITECH PROJECT, 2022
** my_str_isprintable.c
** File description:
** task16
*/
#include "my.h"

int my_str_isprintable( char const * str )
{
    int i = 0;
    int tour = 0;
    for (i;  str[i] != '\0';   i++){
        if (str[i] >= 32 && str[i] <= 126)
            tour++;
        else
            return (0);
    }
    return (1);
}
