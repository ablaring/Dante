/*
** EPITECH PROJECT, 2023
** error_handling.c
** File description:
** desc
*/

#include "../includes/my.h"

void condition_error(char **map, int i, int j)
{
    if (map[j][i] != '*' && map[j][i] != 'X'
    && map[j][i] != '\n')
        exit(84);
}

void check_map(char **map)
{
    for (int j = 0; map[j] != NULL; j++){
        if (strlen(map[j]) != strlen(map[0]))
            exit(84);
        for (int i = 0; map[j][i] != '\0'; i++)
            condition_error(map, i, j);
    }
}

int check_solver(setting_t *set)
{
    recurs(set, 0, 0);
    if (set->stoke[set->height - 1][set->width - 1] == 'o')
        return 0;
    printf("no solution found\n");
    return 84;
}
