/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrecine- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 18:23:18 by lrecine-          #+#    #+#             */
/*   Updated: 2024/07/22 15:40:06 by lrecine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	temp;

	start = 0;
	end = size -1;
	while (start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}
/*
int	main(void)
{
	int	array[5] = {10, 20, 30 ,40, 50};
	int	i;

	i = 0;
	ft_rev_int_tab(array, 5);
	printf("Array invertido = ");
	while (i <= 4)
	{
		printf("%d ", array[i]);
		i++;
	}
	printf("\n");
	return (0);
}*/
