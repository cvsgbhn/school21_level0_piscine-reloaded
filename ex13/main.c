#include <stdio.h>

int ft_recursive_factorial(int nb);

int		main(void)
{
	int test_factorial;

	test_factorial = ft_recursive_factorial(5);
	printf("%d", test_factorial);
	return (0);
}
