#include <stdio.h>

int	*ft_range(int min, int max);

int		main(void)
{
	int min0 = 6;
	int max0 = 6;

	int min1 = -18;
	int max1 = 34;

	int min2 = 6;
	int max2 = 7;

	int min3 = 10;
	int max3 = 2;

	int i;

	i = 0;
	while (i < (max0 - min0))
	{
		printf("%d", (*ft_range(min0, max0))[i]);
		i++;
	}
	i = 0;
	while (i < (max1 - min1))
	{
		printf("%d", (*ft_range(min1, max1))[i]);
	}
	i = 0;
	while (i < (max2 - min2)
	{
		printf("%d", (*ft_range(min2, max2))[i]);
		i++;
	}
	i = 0;
	while (i < (min3 - max3))
	{
		printf("%d", (*ft_range(min3, max3))[i]);
		i++;
	}	
}
