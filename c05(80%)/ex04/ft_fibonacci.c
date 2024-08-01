/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrecine- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 14:16:15 by lrecine-          #+#    #+#             */
/*   Updated: 2024/07/30 18:14:12 by lrecine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index > 1)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	if (index == 1)
		return (1);
	if (index == 0)
		return (0);
	else
		return (-1);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_fibonacci(9));
}*/
