/*
** EPITECH PROJECT, 2019
** lib
** File description:
** my _isint
*/

int my_isint(char *str)
{
    int i = 0;

    for (; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] < 48 || str[i] > 57)
            return (84);
    }
    if (i == 0)
        return (84);
    return (0);
}
