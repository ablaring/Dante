/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** myH
*/

#ifndef MY
    #define MY
    #include <stdlib.h>
    #include <stdio.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <errno.h>
    #include <dirent.h>
    #include <unistd.h>
    #include <sys/stat.h>
    #include <stdint.h>
    #include <time.h>
    #include <sys/sysmacros.h>
    #include <pwd.h>
    #include <grp.h>
    #include <stdarg.h>
    void precision(char *format, int i, va_list list);
    void precision_suite(char *format, int i, va_list list);
    int convertisseur_octal(va_list list);
    int transf_float(float f, int p);
    void transf_float_puissance(float f);
    void boucle_n(va_list list, char const *format);
    void transf_g(float number);
    void flag_b(int n);
    int chase_number(va_list list, int i, char *format);
    int modifier(char *format, va_list list, int i);
    int espace(char *format, va_list list, int i);
    int my_compute_power_rec(char const * str);
    int power(int pow);
    int int_at(int index, char *str);
    int str_int(char *str, int size, int moins);
    int flag(char *format, va_list list, int i);
    int flag_second(char *format, va_list list, int i, int number);
    int flag_third(char *format, va_list list, int i, int number);
    int check_error(char *format, int i);
    int my_printf (char *format , ...);
    int my_put_float(int nb);
    int my_put_nbr(int nb);
    int my_put_float(int nb);
    void my_putchar(char c);
    int my_putnbr_signed(long unsigned nb);
    void my_putstr_modified(char const *test, va_list list);
    int my_putstr_second(int e, int n, int p);
    int my_putstr_tree(char const *str, int a);
    int my_putstr(char const *str);
    void my_putstr_modified(char const *test, va_list list);
    int my_putstr_second(int e, int n, int p);
    int my_putstr_tree(char const *str, int a);
    char * my_revstr ( char * str );
    int my_str_isalpha ( char const * str );
    char * my_strdup ( char const * src );
    int my_str_islower ( char const * str );
    int my_str_isnum ( char const * str );
    int my_str_isprintable( char const * str );
    int my_str_isupper ( char const * str );
    int word_count(char const *str);
    char **my_str_to_word_array(char const * str );
    int end(int m, int k, char *word, char **res);
    char * my_strcapitalize ( char * str );
    char * my_strcat ( char * dest , char const * src );
    int my_strcmp ( char const * s1 , char const * s2 );
    char * my_strcpy ( char * dest , char const * src );
    char * checker(char const *to_find, char *str, int k, int l);
    char *my_strstr(char *str, char const *to_find);
    void my_swap(int *a, int *b);
    void permission(int a, int b, int c, int d);
    void permission_deux(int a, int b, int c, int e);
    void permission_third(int d, int e);
    void ptr_hexadecimal(float i);
    void hexadecimal(float i);
    void alpha_hexadecimal(float i);
    int my_strlen(char const *str);
    int sum_strings_length( int n , ...);
    int my_getnbr(char *str);

#endif /* MY */
