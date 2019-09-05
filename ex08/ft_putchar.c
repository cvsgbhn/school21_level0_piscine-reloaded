#include <unistd.h>

void ft_is_negative(int n);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	ft_is_negative(-20000000);
	ft_is_negative(-200);
	ft_is_negative(-2);
	ft_is_negative(0);
	ft_is_negative(20000000);
	ft_is_negative(56);
	ft_is_negative(15);
	return (0);
}
