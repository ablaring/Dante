/*
** EPITECH PROJECT, 2022
** my_str_to_word_array.c
** File description:
** task04
*/

#include "my.h"

int word_count(char const *str)
{
    int j = 0;
    for (j = 0; str[j] != '\0'; j++);
    return j;
}

int end(int m, int k, char *word, char **res)
{
    word[m] = '\0';
    res[k] = my_strdup(word);
    res[k + 1] = NULL;
    return -1;
}

char *suite(int m, int j, char *word, char *str)
{
    j++;
    for (; str[j] != '\"' && str[j] != '\0'; j++, m++)
        word[m] = str[j];
    word[m - 1] = '\0';
    return word;
}

char **my_str_to_word_array(char const *str)
{
    int m = 0;
    int k = 0;
    int place = word_count(str);
    char **res = malloc(sizeof(char *) * (place));
    char *word = malloc(sizeof(char) * (place));
    for (int j = 0; str[j] != '\0'; j++, m++){
        if (str[j] != '\n'){
            word[m] = str[j];
        }else{
            m = end(m, k, word, res);;
            k++;
        }
    }
    end(m, k, word, res);
    return res;
}
