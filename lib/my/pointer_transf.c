/*
** EPITECH PROJECT, 2022
** pointer_transf.c
** File description:
** pointer
*/
#include "my.h"

void ptr_hexadecimal(float i)
{
    char tab[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b'
    , 'c', 'd', 'e', 'f'};
    int first_result = i / 16;
    char *debut = "0x";
    float second_result = ((i / 16) - first_result) * 16;
    int new = second_result;
    write(1, debut, sizeof(char));
    if (i > 10)
    my_putchar(tab[first_result]);
    my_putchar(tab[new]);
}

void hexadecimal(float i)
{
    char tab[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b'
    , 'c', 'd', 'e', 'f'};
    int first_result = i / 16;
    float second_result = ((i / 16) - first_result) * 16;
    int new = second_result;
    if (i > 10)
    my_putchar(tab[first_result]);
    my_putchar(tab[new]);
    i / 16;
}

void alpha_hexadecimal(float i)
{
    char tab[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B'
    , 'C', 'D', 'E', 'F'};
    int first_result = i / 16;
    float second_result = ((i / 16) - first_result) * 16;
    int new = second_result;
    if (i > 10)
    my_putchar(tab[first_result]);
    my_putchar(tab[new]);
}
