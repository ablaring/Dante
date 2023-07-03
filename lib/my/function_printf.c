/*
** EPITECH PROJECT, 2022
** function_printf.c
** File description:
** function
*/

#include "my.h"

int convertisseur_octal(va_list list)
{
    int e = 0;
    int n = va_arg(list, int);
    int p = 1;
    while (n != 0) {
    e += (n % 8) * p;
    n = n / 8;
    p *= 10;
}
    my_put_nbr(e);
}

int transf_float(float f, int p)
{
int debut = f;
int reste = (f - (float)debut) * 1000000;
float reste_second = (f - (float)debut) * 1000000;
if ((int)reste > (int)reste_second)
    reste -= 0.1;
if (reste == 0.0 || p == 1){
    my_put_nbr(debut);
    my_putchar('.');
if (p == 1)
p = 7;
for (p; p < 7; p++)
my_putchar('0');
}else if (p != 1){
my_put_nbr(debut);
my_putchar('.');
my_put_nbr(reste);
}
return reste;
}

void transf_float_puissance(float f)
{
int i = 0;
for (i; f > 10; i++)
    f /= 10;
int debut = f;
float reste = (f - (float)debut) * 1000001;
float reste_second = (f - (float)debut) * 1000000;
if ((int)reste > (int)reste_second)
    reste -= 0.1;
if (reste == 0.0){
    my_printf("%d.", debut);
for (int i = 0; i < 6; i++)
my_putchar('0');
}else{
my_printf("%d.", debut);
my_put_nbr(reste);
my_putstr("e+");
    if (i <= 9)
        my_putchar('0');
my_put_nbr(i);
}
}

void boucle_n(va_list list, char const *format)
{
    int *var;
    int compteur = 0;
    for (int z = 0; format[z] != '%'; z++)
        compteur++;
    var = va_arg(list, int *);
    *var = compteur;
}

void transf_g(float number)
{
int c = 0;
int i = 0;
int numberArray[c];
int start = number;
float temp = number - start;
my_put_nbr(start);
for (i; start > 1; i++)
start /= 10;
if (i < 6){
my_putchar('.');
for (i; temp > 0.1; i++){
temp *= 10;
numberArray[i] = temp;
start = temp;
my_put_nbr(start);
temp = temp - start;
}
}
}
