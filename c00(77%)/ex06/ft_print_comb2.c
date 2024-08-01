/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrecine- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:29:25 by lrecine-          #+#    #+#             */
/*   Updated: 2024/07/17 19:33:05 by lrecine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int i, int j)
{
	char	w;
	char	x;
	char	y;
	char	z;

	w = i / 10 + '0';
	x = i % 10 + '0';
	y = j / 10 + '0';
	z = j % 10 + '0';
	write(1, &w, 1);
	write(1, &x, 1);
	write(1, " ", 1);
	write(1, &y, 1);
	write(1, &z, 1);
	if (!(i == 98 && j == 99))
		write(1, ", ", 2);
}

void	ft_print_comb2(int i, int j)
{
	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_putchar(i, j);
			j++;
		}
		i++;
	}
	if (i == 99)
	{
		return ;
	}
	write(1, "\n", 1);
}
/*
int	main(void)
{
	ft_print_comb2(0, 0);
	return (0);
}*/
