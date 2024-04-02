/*
** EPITECH PROJECT, 2024
** MIRROR
** File description:
** concat_parameters
*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "phoenix.h"

static int my_strln(char *str)
{
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int calculate_total_len(int ac, char **av)
{
    int total_len = 0;

    for (int i = 0; i < ac; i++) {
        total_len += my_strln(av[i]);
        total_len += 1;
    }
    return total_len;
}

void fill_str(char *str, int ac, char **av)
{
    int k = 0;

    for (int i = 0; i < ac; i++) {
        for (int j = 0; av[i][j] != '\0'; j++) {
            str[k] = av[i][j];
            k++;
        }
        str[k] = '\n';
        k++;
    }
    str[k] = '\0';
}

char *concat_parameters(int ac, char **av)
{
    int total_len = calculate_total_len(ac, av);
    char *str = malloc((total_len + 1) * sizeof(char));

    if (str == NULL) {
        return NULL;
    }
    fill_str(str, ac, av);
    return str;
}

void show_string(char *str)
{
    if (str != NULL) {
        write(1, str, my_strln(str));
    }
}


int main(int ac, char **av)
{
    char *str = concat_parameters(ac, av);

    show_string(str);
    free(str);
    return 0;
}
