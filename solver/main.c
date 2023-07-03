/*
** EPITECH PROJECT, 2023
** main.c
** File description:
** desc
*/

#include "../includes/my.h"

int *create_int(setting_t *set, int x, int y)
{
    int *tab = malloc(sizeof(int) * 4);
    for (int i = 0; i < 4; i++)
        tab[i] = 2000000;
    if (x > 0 && set->tab_nb[y][x - 1] != -1)
        tab[0] = set->tab_nb[y][x - 1];
    if (x < set->width - 1 && set->tab_nb[y][x + 1] != -1)
        tab[1] = set->tab_nb[y][x + 1];
    if (y > 0 && set->tab_nb[y - 1][x] != -1)
        tab[2] = set->tab_nb[y - 1][x];
    if (y < set->height - 1 && set->tab_nb[y + 1][x] != -1)
        tab[3] = set->tab_nb[y + 1][x];
    return tab;
}

int fill_tab_stoke(setting_t *set, int x, int y)
{
    int *tab = create_int(set, x, y);
    set->stoke[y][x] = 'o';
    if (x == set->width - 1 && y == set->height - 1)
        return 0;
    if (tab[0] != -1 && tab[0] < tab[1] && tab[0] < tab[2] && tab[0] < tab[3])
        fill_tab_stoke(set, x - 1, y);
    if (tab[1] != -1 && tab[1] < tab[0] && tab[1] < tab[2] && tab[1] < tab[3])
        fill_tab_stoke(set, x + 1, y);
    if (tab[2] != -1 && tab[2] < tab[1] && tab[2] < tab[0] && tab[2] < tab[3])
        fill_tab_stoke(set, x, y - 1);
    if (tab[3] != -1 && tab[3] < tab[1] && tab[3] < tab[2] && tab[3] < tab[0])
        fill_tab_stoke(set, x, y + 1);
    return 0;
}

int fs_open_file (char const *filepath, setting_t *set)
{
    struct stat sb;
    stat(filepath, &sb);
    int fd = open(filepath, O_RDONLY);
    char *str = malloc(sizeof(char) * (sb.st_size + 2));
    read(fd, str, sb.st_size);
    if (sb.st_size == 0 || sb.st_mode == 16877 || fd == -1)
        return 84;
    set->stoke = my_str_to_word_array(str);
    check_map(set->stoke);
    for (; set->stoke[set->height] != NULL; set->height++)
        for (;set->stoke[set->height][set->width] != '\0'; set->width++);
    if (set->stoke[set->height - 1][set->width - 1] != '*')
        return 84;
    create_tab_int(set);
    if (check_solver(set) == 84)
        return 84;
    init_tab_int(set);
    close(fd);
    return 0;
}

void init_setting(setting_t *setting)
{
    setting->height = 0;
    setting->width = 0;
    setting->stoke = NULL;
}

int main(int argc, char const *argv[])
{
    setting_t *setting = malloc(sizeof(setting_t));
    init_setting(setting);
    if (argc != 2)
        return 84;
    if (fs_open_file(argv[1], setting) == 84)
        return 84;
    return 0;
}
