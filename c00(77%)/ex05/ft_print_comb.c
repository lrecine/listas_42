/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrecine- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 17:47:17 by lrecine-          #+#    #+#             */
/*   Updated: 2024/07/17 19:25:25 by lrecine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	answer(char l, char m, char r)
{
	write (1, &l, 1);
	write (1, &m, 1);
	write (1, &r, 1);
	if (l != '7' || m != '8' || r != '9')
		write (1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	l;
	char	m;
	char	r;

	l = '0';
	while (l <= '7')
	{
		m = l + 1;
		while (m <= '8')
		{
			r = m + 1;
			while (r <= '9')
			{
				answer(l, m, r);
				r++;
			}
			m++;
		}
		l++;
	}
}
/*
int main()
{
	ft_print_comb();
}*/
