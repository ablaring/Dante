/*
** EPITECH PROJECT, 2022
** my_str_isalpha.c
** File description:
** task12
*/
#include "my.h"

int my_str_isalpha ( char const * str )
{
    int i = 0;
    int tour = 0;
    for (i;  str[i] != '\0';   i++){
        if (str[i] >= 97 && str[i] <= 122 || str[i] >= 65 && str[i] <= 90)
            tour++;
        else
            return (0);
    }
    return (1);
}
