/*
** EPITECH PROJECT, 2022
** my_str_islower.c
** File description:
** task14
*/

#include "my.h"

int my_str_islower ( char const * str )
{
    int i = 0;
    int tour = 0;
    for (i;  str[i] != '\0';   i++){
        if (str[i] >= 97 && str[i] <= 122)
            tour++;
        else
            return (0);
    }
    return (1);
}
