/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 14:59:48 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/11 17:14:33 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char *))
{
	int counter;
	int iterator;

	counter = 0;
	iterator = 0;
	while (tab[iterator])
	{
		if (f(tab[iterator]) == 1)
			counter++;
		iterator++;
	}
	return (counter);
}
