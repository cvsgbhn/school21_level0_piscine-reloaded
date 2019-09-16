/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 15:45:31 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/11 17:17:24 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 != *s2)
		return (*s1 - *s2);
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char *temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

char	**bubble_sort(char **arr, int n)
{
	int counter1;
	int counter2;

	counter1 = 1;
	while (counter1 < n - 1)
	{
		counter2 = counter1 + 1;
		while (counter2 != n)
		{
			if (ft_strcmp((arr[counter1]), (arr[counter2])) > 0)
				ft_swap(&(arr[counter1]), &(arr[counter2]));
			counter2++;
		}
		counter1++;
	}
	return (arr);
}

int		main(int argc, char **argv)
{
	int		arg_counter;
	int		letter_counter;
	char	**sorted_argv;

	sorted_argv = bubble_sort(argv, argc);
	arg_counter = 1;
	if (argc == 1)
		return (0);
	while (arg_counter != argc)
	{
		letter_counter = 0;
		while (sorted_argv[arg_counter][letter_counter] != '\0')
		{
			ft_putchar(argv[arg_counter][letter_counter]);
			letter_counter++;
		}
		ft_putchar('\n');
		arg_counter++;
	}
	return (0);
}
