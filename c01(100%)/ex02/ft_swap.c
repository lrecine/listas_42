/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrecine- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 11:20:44 by lrecine-          #+#    #+#             */
/*   Updated: 2024/07/21 12:52:08 by lrecine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	printf("Antes a = %d\n", a);
	printf("Antes b = %d\n", b);

	ft_swap(&a, &b);
	printf("Depois a = %d\n", a);
	printf("Depois b = %d\n", b);
	return (0);
}*/
