#include <stdio.h>

int ft_iterative_factorial(int nb);

int		main(void)
{
	int test_factorial;
    test_factorial = 0;
    test_factorial = ft_iterative_factorial(5);
	printf("%d", test_factorial);
    return(0);
}
