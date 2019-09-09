/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 13:53:48 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/04 13:54:42 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int hypothesis;
	int check_calculation;

	if (nb <= 0 || !nb)
		return (0);
	if (nb == 1)
		return (1);
	hypothesis = nb / 2;
	while (hypothesis != 0)
	{
		check_calculation = (nb / hypothesis) * (nb / hypothesis);
		if (check_calculation == nb)
			return (nb / hypothesis);
		else if (hypothesis == 1)
			return (0);
		check_calculation = 0;
		hypothesis--;
	}
	return (0);
}
