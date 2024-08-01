/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrecine- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 14:05:57 by lrecine-          #+#    #+#             */
/*   Updated: 2024/07/30 17:50:46 by lrecine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	r;

	r = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		r = r * nb;
		power --;
	}
	return (r);
}
/*#include <stdio.h>
int	main(void)
{
	int	nb = 3;
	int	power = 3;
	printf("%d\n", ft_iterative_power(nb, power));
	return (0);
}*/
