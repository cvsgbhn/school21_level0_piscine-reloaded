/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 15:16:12 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/04 15:35:49 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int arg_counter;
	int letter_counter;

	arg_counter = 1;
	if (argc == 1)
		return (0);
	while (arg_counter != argc)
	{
		letter_counter = 0;
		while (argv[arg_counter][letter_counter] != '\0')
		{
			ft_putchar(argv[arg_counter][letter_counter]);
			letter_counter++;
		}
		ft_putchar('\n');
		arg_counter++;
	}
	return (0);
}
