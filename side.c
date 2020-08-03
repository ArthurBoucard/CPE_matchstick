/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** side
*/

#include "my.h"

#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int ask_line(int line, char **board)
{
    size_t bufsize = 32;
    size_t nb;
    char *buffer;

    buffer = (char *)malloc(sizeof(char) * bufsize);
    for (int i = 1; i != 0;) {
        my_printf("Line: ");
        nb = getline(&buffer, &bufsize, stdin);
        if (nb == -1)
            return (nb);
        if (my_isint(buffer) == 84)
            my_printf("Error: invalid input (positive number expected)\n");
        else
            i = verif_line(line, my_getnbr(buffer), board[my_getnbr(buffer)]);
    }
    return (my_getnbr(buffer));
}

int ask_nb(int max, char **board, int u_line, int line)
{
    size_t bufsize = 32;
    size_t nb;
    char *buffer2;

    buffer2 = (char *)malloc(sizeof(char) * bufsize);
    for (int i = 1; i != 0;) {
        my_printf("Matches: ");
        nb = getline(&buffer2, &bufsize, stdin);
        if (nb == -1)
            return (nb);
        if (my_isint(buffer2) == 84) {
            my_printf("Error: invalid input (positive number expected)\n");
            return (-2);
        } else
            i = verif_nb(max, my_getnbr(buffer2), board[u_line]);
        if (i != 0)
            return (-2);
    }
    return (my_getnbr(buffer2));
}

int *ask_user(int *value, int line, int max, char **board)
{
    int u_line;
    int u_nb;

    value[0] = -1;
    value[1] = -1;
    u_line = ask_line(line, board);
    if (u_line == -1)
        return (value);
    u_nb = ask_nb(max, board, u_line, line);
    if (u_nb == -1)
        return (value);
    else if (u_nb == -2) {
        ask_user(value, line, max, board);
        return (value);
    }
    my_printf("Player removed %d match(es) from line %d\n", u_nb, u_line);
    value[0] = u_line;
    value[1] = u_nb;
    return (value);
}

char **make_board(char **board, int line)
{
    int nb = 0;
    int i;
    int len = 0;

    for (i = 0; i < (line + (line - 1)) + 2; i++)
        board[0][i] = '*';
    for (i = 1; i < line + 1; i++, len = 0) {
        board[i][len] = '*';
        len++;
        for (int j = i; j <= line - 1; j++, len++)
            board[i][len] = ' ';
        for (int k = 0; k < i + (i - 1); k++, len++)
            board[i][len] = '|';
        for (int j = i; j <= line - 1; j++, len++)
            board[i][len] = ' ';
        board[i][len] = '*';
    }
    for (i = 0; i < (line + (line - 1)) + 2; i++)
        board[line + 1][i] = '*';
    return (board);
}

char **board_malloc(char **board, int line)
{
    board = malloc(sizeof(char *) * (line + 2));
    for (int i = 0; i < line + 2; i++)
        board[i] = malloc(sizeof(char) * (line + (line - 1) + 2));
    return (board);
}