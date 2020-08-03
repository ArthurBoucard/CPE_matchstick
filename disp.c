/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** disp
*/

#include "my.h"

void disp_board(char **board, int line)
{
    for (int f = 0; f < line + 2; f++)
        my_printf("%s\n", board[f]);
}