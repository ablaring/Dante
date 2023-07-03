/*
** EPITECH PROJECT, 2023
** rand.c
** File description:
** desc
*/

#include "../includes/my.h"

int rand_number(int min, int max)
{
    return (rand() % (max - min + 1) + min);
}
