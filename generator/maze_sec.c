/*
** EPITECH PROJECT, 2023
** maze_sec.c
** File description:
** desc
*/

#include "../includes/my.h"

void end_maze(char **map, int x, int i)
{
    for (int k = 0; k < x; k++)
        if (map[i][k] == '*')
            find_x(map, k, i);
}

void condition_inperfect(char **map, int k, int i)
{
    if (k % 2 == 0 && i % 2 == 0){
        map[i][k] = '*';
    }else if (map [i][k] != '*'){
        map[i][k] = 'X';
    }
}

void condition_perfect(char **map, int k, int i, setting_t *set)
{
    if (i != set->height - 1 && k != set->width - 1 &&
        k % 2 == 0 && i % 2 == 0){
        map[i][k] = '*';
    }else if (map [i][k] != '*'){
        map[i][k] = 'X';
    }
}
