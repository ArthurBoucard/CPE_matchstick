/*
** EPITECH PROJECT, 2019
** my
** File description:
** my.h
*/

void my_putchar(char c);

int my_isneg(int n);

int my_put_nbr(int nb);

void my_swap(int *a, int *b);

int my_putstr(char const *str);

int my_strlen(char const *str);

int my_getnbr(char const *str);

int my_compute_square_root(int nb);

int my_is_prime(int nb);

int my_find_prime_sup(int nb);

char *my_strcpy(char *dest, char const *src);

char *my_strncpy(char *dest, char const *src, int n);

char *my_revstr(char *str);

char *my_strstr(char *str, char const *to_find);

int my_strcmp(char const *s1, char const *s2);

int my_strncmp(char const *s1, char const *s2, int n);

char *my_strupcase(char *str);

char *my_strlowcase(char *str);

int my_show_word_array(char * const *tab);

char *my_strcat(char *dest, char const *src);

char *my_strncat(char *dest, char const *src, int nb);

int my_compute_power_rec(int nb, int p);

char **my_str_to_word_array(char const *str);

void calculus(int numb);

int sum_stdarg(int i, int nb, ...);

int disp_stdarg (char *s , ... );

int base8(int nb);

char *base16(int nb);

char *base16_min(int nb);

char *base2(int nb);

char *fill_str(char *str, char fill);

int my_printf(char *flags, ...);

int base16to10(char *str);

int my_isint(char *str);

char **strswap(char **l_a, int fst, int ac);

char **strswap_b(char **l_a, int fst, int ac);

char **makel_a(int ac_a, int ac_b, char **l_a, char **l_b);

int isorder(int ac, char **l_a);

int rev_isorder(int ac, char **l_b);

char **board_malloc(char **board, int line);

char **make_board(char **board, int line);

int *ask_user(int *value, int line, int max, char **board);

int verif_line(int line, int p_line, char *board_line);

int verif_nb(int max, int nb, char *line);

int nb_stick(char *line);

int verif_board(char **board, int line);

int all_stick(char **board, int line);

void disp_board(char **board, int line);
