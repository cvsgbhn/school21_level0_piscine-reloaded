#include <stdio.h>

int     ft_count_if(char **tab, int (*f)(char *));

int		print_all(char **tab)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while (tab[i])
	{
		while (tab[i][j])
		{
			printf("%c", tab[i][j]);
			j++;
		}
		i++;
		return (1);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int count_if;

	count_if = 0;
	int (*f)(char **);
	f = &print_all;
	if (argc <2)
		return (0);
	count_if = ft_count_if(argv, (*f)(argv));
	return (0);
}
