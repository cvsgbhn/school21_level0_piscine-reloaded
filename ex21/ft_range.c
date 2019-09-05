/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 14:23:25 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/05 14:44:48 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *range_arr;
	int increment;

	increment = 0;
	if (min >= max)
		return (0);
	range_arr = (int *)malloc(sizeof(int) * (max - min));
	if (!range_arr)
		return (0);
	while (range_arr[increment])
	{
		range_arr[increment] = min + increment;
		increment++;
	}
	return (range_arr);
}
