#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int *nums;
	int i;
	int len;
	int start;
	int end;

	i = 0;
	start = -10;
	end = -5;
	len = (end - start);
	if (start < 0 && end < 0)
		len = ((start * - 1) - (end * - 1));
	nums = ft_range(start, end);
	while (i <= len)
	{
		printf("%d\n", nums[i]);
		i++;
	}
	return (0);
}
