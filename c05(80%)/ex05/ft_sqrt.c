/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrecine- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 12:32:54 by lrecine-          #+#    #+#             */
/*   Updated: 2024/08/01 13:40:00 by lrecine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	num;

	num = 1;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (num * num < nb)
		num++;
	if (num * num == nb)
		return (num);
	return (0);
}
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_sqrt(2147395600));
}
