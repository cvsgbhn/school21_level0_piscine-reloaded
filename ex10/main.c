#include <stdio.h>

void ft_swap(int *a, int *b);

int		main(void)
{
	int a = 45;
	int b = 76;

	ft_swap(&a, &b);
	printf("%d", a);
	printf("%d", b);
	return(0);
}


