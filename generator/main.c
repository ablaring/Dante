/*
** EPITECH PROJECT, 2023
** main.c
** File description:
** desc
*/

#include "../includes/my.h"

int error_handling(int ac, char **av)
{
    if (ac != 4 && ac != 3)
        return 84;
    for (int i = 0; av[1][i] != '\0'; i++)
        if (av[1][i] < '0' || av[1][i] > '9')
            return 84;
    for (int i = 0; av[2][i] != '\0'; i++)
        if (av[2][i] < '0' || av[2][i] > '9')
            return 84;
    if (av[3] != NULL){
        if (my_strcmp(av[3], "perfect") != 0)
            return 84;
    }
    return 0;
}

void generate_maze(char **av)
{
    int x = my_getnbr(av[1]);
    int y = my_getnbr(av[2]);
    setting_t *set = malloc(sizeof(setting_t));
    set->width = x;
    set->height = y;
    int perfect = 0;
    if (av[3] != NULL)
        my_strcmp(av[3], "perfect") == 0 ? perfect = 1 : 0;
    if (perfect == 1)
        perfect_maze(x, y, set);
    else
        imperfect_maze(x, y);
}

int main(int argc, char *argv[])
{
    if (error_handling(argc, argv) == 84)
        return 84;
    generate_maze(argv);
    return 0;
}
