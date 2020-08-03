/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** main
*/

#include "my.h"

#include <stdlib.h>
#include <unistd.h>

char **update_board(char **board, int line, int nb)
{
    int i = 1;

    for (; board[line][i] != '*';)
        i++;
    for (; nb > 0; i--) {
        if (board[line][i] == '|') {
            board[line][i] = ' ';
            nb--;
        }
    }
    return (board);
}

char **ai_start(char **board, int line, int max)
{
    int max_stick = 0;
    int nb_line;
    int all = all_stick(board, line);

    for (int i = 1; i <= line; i++) {
        if (nb_stick(board[i]) > max_stick) {
            max_stick = nb_stick(board[i]);
            nb_line = i;
        }
    }
    if (max_stick == 1 && all == 1)
        max_stick = 1;
    else if (all <= max && max_stick == all)
        max_stick--;
    else if (max_stick >= max)
        max_stick = max;
    update_board(board, nb_line, max_stick);
    my_printf("\nAI's turn...\nAI removed ");
    my_printf("%d match(es) from line %d\n", max_stick, nb_line);
    return (board);
}

int start(char **board, int line, int max)
{
    int *value = malloc(sizeof(int) * 2);

    disp_board(board, line);
    my_printf("\nYour turn:\n");
    value = ask_user(value, line, max, board);
    if (value[0] == -1 || value[1] == -1)
        return (84);
    board = update_board(board, value[0], value[1]);
    disp_board(board, line);
    if (verif_board(board, line) == 0) {
        my_printf("You lost, too bad...\n");
        return (2);
    }
    board = ai_start(board, line, max);
    if (verif_board(board, line) == 0) {
        disp_board(board, line);
        my_printf("I lost... snif... but I'll get you next time!!\n");
        return (1);
    }
    start(board, line, max);
}

int main(int ac, char **av)
{
    char **board;
    int line = my_getnbr(av[1]);
    int res;

    if (ac != 3)
        return (84);
    if (my_isint(av[1]) == 84 || my_isint(av[2]) == 84)
        return (84);
    if (av[1][0] == '0' || av[2][0] == '0')
        return (84);
    board = board_malloc(board, line);
    board = make_board(board, line);
    res = start(board, line, my_getnbr(av[2]));
    if (res == 1)
        return (1);
    else if (res == 2)
        return (2);
    free(board);
    return (0);
}
