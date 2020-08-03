/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** verif
*/

#include "my.h"

int all_stick(char **board, int line)
{
    int all = 0;
    int i;

    for (int f = 0; f < line + 2; f++, i = 0)
        for (i = 0; i < (line + (line - 1) + 2); i++)
            if (board[f][i] == '|')
                all++;
    return (all);
}

int verif_board(char **board, int line)
{
    for (int f = 0; f < line + 2; f++)
        for (int i = 0; i < ((line + (line - 1) + 2)); i++)
            if (board[f][i] == '|')
                return (84);
    return (0);
}

int verif_nb(int max, int nb, char *line)
{
    if (nb < 0) {
        my_printf("Error: invalid input (positive number expected)\n");
        return (84);
    }
    if (nb > max) {
        my_printf("Error: you cannot remove more than %d matches per turn\n",
            max);
        return (84);
    } else if (nb_stick(line) < nb) {
        my_printf("Error: not enough matches on this line\n");
        return (84);
    } else if (nb == 0) {
        my_printf("Error: you have to remove at least one match\n");
        return (84);
    }
    return (0);
}

int verif_line(int line, int p_line, char *board_line)
{
    int pipe = 0;

    if (p_line < 0) {
        my_printf("Error: invalid input (positive number expected)\n");
        return (84);
    }
    if (p_line > line) {
        my_printf("Error: this line is out of range\n");
        return (84);
    } else if (p_line <= 0) {
        my_printf("Error: this line is out of range\n");
        return (84);
    } else {
        for (int i = 1; i < ((line + (line - 1) + 2)); i++)
            if (board_line[i] == '|')
                pipe = 1;
        if (pipe == 0) {
            my_printf("Error: not enough matches on this line\n");
            return (84);
        }
    }
    return (0);
}

int nb_stick(char *line)
{
    int nb = 0;

    for (int i = 1; line[i] != '*'; i++) {
        if (line[i] == '|')
            nb++;
    }
    return (nb);
}