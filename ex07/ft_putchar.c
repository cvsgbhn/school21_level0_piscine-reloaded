#include <unistd.h>

void ft_print_numbers(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	ft_print_numbers();
	return (0);
}
