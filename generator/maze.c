/*
** EPITECH PROJECT, 2023
** maze.c
** File description:
** desc
*/

#include "../includes/my.h"

int lenght;
int width;
int j;

void check_coefs(char **map, int i, int final_y)
{
    int coef = final_y - i;
    if (coef > 0)
        for (; i != final_y; i++)
            map[i][j] = '*';
    else
        for (; i != final_y; i--)
            map[i][j] = '*';
    map[i][j] = '*';
    j++;
    map[i][j] = '*';
}

void draw_route(char **map, int i, int final_y)
{
    int rand_nb = rand_number(1, 100);
    int loop = 0;
    if (j == width - 2){
        check_coefs(map, i, final_y);
        return;
    }
    if (i == 0 && j == 0)
        map[i][j] = '*';
    if (rand_nb % 3 == 0 && (i + 1) < lenght){
        i++;
        loop = 1;
    }
    if (loop == 0)
        j++;
    map[i][j] = '*';
    draw_route(map, i, final_y);
}

void find_x(char **map, int x, int y)
{
    int nb = 0;
    if (x > 0 && map[y][x - 1] == 'X')
        nb++;
    if (y > 0 && map[y - 1][x] == 'X')
        nb++;
    if (x < width && map[y][x + 1] == 'X')
        nb++;
    if (y < lenght - 1 && map[y + 1][x] == 'X')
        nb++;
    if (nb == 4){
        int rand_nb = rand_number(1, 4);
        if (rand_nb == 1)
            map[y][x - 1] = '*';
        if (rand_nb == 2)
            map[y - 1][x] = '*';
        if (rand_nb == 3)
            map[y][x + 1] = '*';
        map[y - 1][x] = '*';
    }
}

void imperfect_maze(int x, int y)
{
    lenght = y;
    width = x;
    j = 0;
    char **map = malloc(sizeof(char *) * (y + 1));
    for (int i = 0; i < y; i++){
        map[i] = malloc(sizeof(char) * (x + 1));
        map[i][x] = '\0';
    }
    for (int k = 0; k < x; k++)
        map[0][k] = '*';
    for (int k = 0; k < y; k++)
        map[k][0] = '*';
    draw_route(map, 0, y - 1);
    for (int i = 0; i < y; i++)
        for (int k = 0; k < x; k++)
            condition_inperfect(map, k, i);
    for (int i = 0; i < y; i++)
        end_maze(map, x, i);
    print_map(map);
}

void perfect_maze(int x, int y, setting_t *set)
{
    lenght = y;
    width = x;
    j = 0;
    char **map = malloc(sizeof(char *) * (y + 1));
    for (int i = 0; i < y; i++){
        map[i] = malloc(sizeof(char) * (x + 1));
        map[i][x] = '\0';
    }
    for (int k = 0; k < x; k++)
        map[0][k] = '*';
    for (int k = 0; k < y; k++)
        map[k][0] = '*';
    for (int i = 0; i < y; i++)
        for (int k = 0; k < x; k++)
            condition_perfect(map, k, i, set);
    for (int i = 0; i < y; i++)
        end_maze(map, x, i);
    print_map(map);
}
