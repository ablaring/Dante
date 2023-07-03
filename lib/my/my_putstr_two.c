/*
** EPITECH PROJECT, 2022
** my_putstr.c
** File description:
** task02
*/
#include "my.h"

void my_putstr_modified(char const *test, va_list list)
{
    int y = 0;
    while (test[y] != '\0') {
        if (test[y] < 32 || test[y] >= 127){
        my_putchar(92);
            int e = 0;
            int n = test[y];
            int p = 1;
            e = my_putstr_second(e, n, p);
            my_put_nbr(e);
            y++;
        }
if (test[y] > 32 || test[y] <= 127){
    my_putchar(test[y]);
    }
y++;
    }
}

int my_putstr_second(int e, int n, int p)
{
while (n != 0) {
    e += (n % 8) * p;
    n = n / 8;
    p *= 10;
}
return e;
}

int my_putstr_tree(char const *str, int a)
{
    for (int i = 0; i < a; i++){
        my_putchar(str[i]);
    }
}
