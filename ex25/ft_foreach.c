void	ft_foreach(int *tab, int length, void(*f)(int))
{
	while (length > 0)
		{
			f(*tab);
			tab++;
			length--;
		}
}
