/*
** EPITECH PROJECT, 2023
** perfect_suite.c
** File description:
** desc
*/

#include "../includes/my.h"

void print_map(char **map)
{
    int i = 0;
    for (; map[i + 1] != NULL; i++)
        printf("%s\n", map[i]);
    printf("%s", map[i]);
}

void perfect_mazesuite(char **map, int x, int i)
{
    for (int j = 0; j < x; j++){
        if (map[i][j] != '*')
            map[i][j] = 'X';
    }
}

void rand_etoile(char **map, int x, int y)
{
    int rand_nb;
    int rand_nb_two;
    for (int i = 0; i < (x * y) / 2; i++){
        rand_nb = rand_number(0, y - 1);
        rand_nb_two = rand_number(0, x - 1);
        map[rand_nb][rand_nb_two] = '*';
    }
}
