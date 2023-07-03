/*
** EPITECH PROJECT, 2023
** find_x.c
** File description:
** desc
*/

#include "../includes/my.h"

int recurs(setting_t *set, int x, int y)
{
    set->stoke[y][x] = 'o';
    if (x > 0 && set->stoke[y][x - 1] == '*')
        recurs(set, x - 1, y);
    if (set->stoke[y][x + 1] != '\0' && set->stoke[y][x + 1] == '*')
        recurs(set, x + 1, y);
    if (y > 0 && set->stoke[y - 1][x] == '*')
        recurs(set, x, y - 1);
    if (set->stoke[y + 1] != NULL && set->stoke[y + 1][x] == '*')
        recurs(set, x, y + 1);
    return 0;
}

void init_tab_int(setting_t *set)
{
    int x = set->width - 1;
    int y = set->height - 1;
    int nb = 1;
    fill_tab_int(set, x, y, nb);
    clean_stoke(set);
    fill_tab_stoke(set, 0, 0);
    for (int i = 0; set->stoke[i] != NULL; i++) {
        my_putstr(set->stoke[i]);
        if (i < set->height - 1)
            my_putchar('\n');
    }
}

void create_tab_int(setting_t *set)
{
    int i = 0;
    int j = 0;
    set->tab_nb = malloc(sizeof(int *) * (set->height));
    for (int y = 0; y < set->height; y++) {
        set->tab_nb[y] = malloc(sizeof(int) * (set->width));
    }
    for (; set->stoke[i] != NULL && set->stoke[i][j] != '\0'; j++) {
        if (set->stoke[i][j] == 'X')
            set->tab_nb[i][j] = -1;
        else
            set->tab_nb[i][j] = 0;
        if (set->stoke[i][j + 1] == '\0') {
            j = -1;
            i++;
        }
    }
}

int fill_tab_int(setting_t *set, int x, int y, int nb)
{
    set->tab_nb[y][x] = nb;
    if (x > 0 && set->tab_nb[y][x - 1] == 0)
        fill_tab_int(set, x - 1, y, nb + 1);
    if (y > 0 && set->tab_nb[y - 1][x] == 0)
        fill_tab_int(set, x, y - 1, nb + 1);
    if (x < set->width && set->tab_nb[y][x + 1] == 0)
        fill_tab_int(set, x + 1, y, nb + 1);
    if (y < set->height - 1 && set->tab_nb[y + 1][x] == 0)
        fill_tab_int(set, x, y + 1, nb + 1);
    return 0;
}

void clean_stoke(setting_t *set)
{
    int a = 0;
    for (int y = 0; set->stoke[y] != NULL; y++) {
        for (int x = 0; set->stoke[y][x] != '\0'; x++) {
            set->stoke[y][x] == 'o' ? set->stoke[y][x] = '*' : a == 1;
        }
    }
}
