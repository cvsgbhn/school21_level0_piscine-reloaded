/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 16:31:27 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/03 16:39:40 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char *alphabet;

	alphabet = "abcdefghijklmnopqrstuvwxyz";
	while (*alphabet)
	{
		ft_putchar(*alphabet);
		alphabet++;
	}
}
