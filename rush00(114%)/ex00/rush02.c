/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 16:57:06 by flferrei          #+#    #+#             */
/*   Updated: 2024/07/14 12:58:48 by lrecine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	check(int x, int y, int row, int col)
{
	if ((row == 1 && col == 1) || (row == 1 && col == x))
		write(1, "A", 1);
	else if ((row == y && col == 1) || (row == y && col == x))
		write(1, "C", 1);
	else if (((row == 1) || (row == y)) || (col == 1) || (col == x))
		write(1, "B", 1);
	else
		write(1, " ", 1);
}

void	draw(int x, int y, int row, int col)
{
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			check(x, y, row, col);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}

void	rush(int x, int y)
{
	int	row;
	int	col;

	if (x <= 0 || y <= 0)
		return ;
	row = 1;
	col = 1;
	draw(x, y, row, col);
}
