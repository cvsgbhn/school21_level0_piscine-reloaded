int	ft_count_if(char *tab, int(*f)(char *))
{
	int counter;

	counter = 0;
	while (*tab)
	{
		f(*tab);
		counter++;
		tab++;
	}
	return (0);
}
