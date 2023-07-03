/*
** EPITECH PROJECT, 2022
** my_strncmp.c
** File description:
** task07
*/
#include "my.h"

int my_strncmp ( char const * s1 , char const * s2 , int n )
{
    int i = 0;
    for (i; i < n; i++){
        if (s1[i] != s2[i]){
            return 1;
        }
    }
    return 0;
}
