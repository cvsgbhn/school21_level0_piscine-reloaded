#include <stdio.h>

int     ft_count_if(char **tab, int (*f)(char *));

int		print_all(char *tab)
{
	int i;
	
	i = 0;
	while (tab[i])
	{	
		printf("%c", tab[i]);
		i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int count_if;

	count_if = 0;
	int (*fun)(char *);
	fun = &print_all;
	if (argc <2)
		return (0);
	count_if = ft_count_if(argv, fun);
	printf("%d", count_if);
	return (0);
}
