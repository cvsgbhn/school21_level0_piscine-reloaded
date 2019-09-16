/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 14:34:59 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/13 12:51:11 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display.h"
#define BUF_SIZE 10

int		main(int argc, char **argv)
{
	int file_open;
	int buf;

	if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (1);
	}
	if (argc < 2)
	{
		ft_putstr("File name missing.\n");
		return (1);
	}
	file_open = open(argv[1], O_RDONLY);
	if (file_open == -1)
	{
		ft_putstr("open() error");
		return (1);
	}
	while (read(file_open, &buf, 1))
		ft_putchar(buf);
	if (close(file_open) == -1)
		ft_putstr("close() error");
	return (0);
}
