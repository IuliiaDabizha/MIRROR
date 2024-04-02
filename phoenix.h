/*
** EPITECH PROJECT, 2023
** B-BOO-101-LYN-1-1-phoenixd03-iuliia.dabizha
** File description:
** phoenix
*/

#ifndef PHOENIX_H_
    #define PHOENIX_H_

int is_prime_number(int nb);
int iterative_factorial(int nb);
void print_number(int n);
void my_putchar(char c);
char my_toupper(char c);
char my_tolower(char c);
void my_strcapitalize(char *str);
char *my_strcpy(char *dest, char const *src);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strstr(char *str, char const *to_find);
char my_tpr(char c);
char *my_strupcase(char *str);
void print_num(int n);
int recursive_power(int nb, int p);
char *reverse_string(char *str);
void print_string(char *str);
int show_alphabet(void);
int is_increasing(int number);
void print_number(int number);
int show_combinations(void);
void print_nb(int nb);
int show_number(int nb);
void show_string(char *str);
int is_digit(char c);
int is_out_of_range(long long num, int sign);
int handle_sign(char c, int sign);
long long convert_to_number(const char *str, int *sign);
int to_number(const char *str);
char *concat_strings(char *dest, char const *src);
void my_putstr(char const *str);
int my_strlen(char const *str);
void print_strng(char *str);
void print_strg(char *str);
int compare_strings(char *str1, char *str2);
void sort_strings(int count, char *str[]);
char *duplicate_string(char const *src);
char *concat_parameters(int ac, char **av);
void fill_str(char *str, int ac, char **av);
int calculate_total_len(int ac, char **av);

#endif /* !PHOENIX_H_ */
