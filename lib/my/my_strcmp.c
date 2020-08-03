/*
** EPITECH PROJECT, 2019
** my_strcmp
** File description:
** my_strcmp
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;
    int diff;

    while (s1[i] == s2[i])
        i += 1;
    diff = s1[i] - s2[i];
    return (diff);
}
