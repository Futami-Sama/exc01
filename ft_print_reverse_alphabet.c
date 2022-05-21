#include <unistd.h>

int  ft_putchar(char c)
{
    write(0, &c, 1);
}

void ft_print_reverse_alphabet(void)
{
    char letter;

    letter = 'z';
    while (letter >= 'a')
      ft_putchar(letter--);
}

void main(void)
{
    ft_print_reverse_alphabet();
}