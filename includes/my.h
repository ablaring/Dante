/*
** EPITECH PROJECT, 2022
** MY_H
** File description:
** desc
*/

#ifndef MY_H_
    # define MY_H_

    #include <stdlib.h>
    #include <stdio.h>
    #include <unistd.h>
    #include <fcntl.h>
    #include <string.h>
    #include <dirent.h>
    #include <math.h>
    #include <time.h>
    #include <sys/wait.h>
    #include <sys/stat.h>
    #include <sys/types.h>
    #include "../lib/my/my.h"
    #include "./struct.h"
    void check_coefs(char **map, int i, int final_y);
    void check_rand(int i, int j, char **map);
    int rand_number(int min, int max);
    void draw_route(char **map, int i, int final_y);
    void perfect_maze(int x, int y, setting_t *set);
    void print_map(char **map);
    void perfect_mazesuite(char **map, int x, int i);
    int error_handling(int ac, char **av);
    void generate_maze(char **av);
    void imperfect_maze(int x, int y);
    void rand_etoile(char **map, int x, int y);
    void find_dimension(char **map, setting_t *setting);
    void find_x(char **map, int x, int y);
    void back_to_passt(setting_t *setting, char **map);
    void free_function(char **stock, char *str, setting_t *setting);
    int fs_open_file (char const *filepath, setting_t *setting);
    void print_map_sec(char **map, setting_t *setting);
    void init_setting(setting_t *setting);
    void reset_setting_suite(setting_t *setting, int cadena);
    void reset_setting_nb(setting_t *setting, int cadena);
    void find_solver_suite(char **map, setting_t *setting);
    void find_solver(char **map, setting_t *setting);
    void solver_winning(char **map, setting_t *setting);
    int recurs(setting_t *set, int x, int y);
    void create_tab_int(setting_t *set);
    int fill_tab_int(setting_t *set, int x, int y, int nb);
    void clean_stoke(setting_t *set);
    int *create_int(setting_t *set, int x, int y);
    int fill_tab_stoke(setting_t *set, int x, int y);
    void init_tab_int(setting_t *set);
    void check_map(char **map);
    int check_solver(setting_t *set);
    void end_maze(char **map, int x, int i);
    void condition_inperfect(char **map, int k, int i);
    void condition_perfect(char **map, int k, int i, setting_t *set);

#endif
