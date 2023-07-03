/*
** EPITECH PROJECT, 2022
** my_str_isupper.c
** File description:
** task15
*/
#include "my.h"

int my_str_isupper ( char const * str )
{
    int i = 0;
    int tour = 0;
    for (i;  str[i] != '\0';   i++){
        if (str[i] >= 65 && str[i] <= 90)
            tour++;
        else
            return (0);
    }
    return (1);
}
