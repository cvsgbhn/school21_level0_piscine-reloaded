#include <unistd.h>
#include <stdio.h>

void ft_ft(int *nbr);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	int number;

	ft_ft(&number);	
	return (0);
}
