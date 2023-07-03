/*
** EPITECH PROJECT, 2022
** my_strstr.c
** File description:
** task05
*/
#include "my.h"

char * checker(char const *to_find, char *str, int k, int l)
{
    int j = 0;
    int debut = k;
    while (to_find[j] == str[k]){
        if (to_find[j] == to_find[l - 1]){
            return &str[debut];
        }
        j++;
        k++;
    }
    return 0;
}

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int k = 0;
    int l = 0;
    char *ret = 0;

    for (int i = 0; i < to_find[i]; i++){
        l++;
    }
    for (int i = 0; i < str[i] && ret == 0; i++){
        if (to_find[0] == str[i]){
            k = i;
            ret = checker(to_find, str, k, l);
        }
    }
    return ret;
}
