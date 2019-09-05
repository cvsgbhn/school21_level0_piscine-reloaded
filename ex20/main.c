#include <stdio.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char *source = "qweert";

	printf("%s", ft_strdup(source));
	return (0);
}
