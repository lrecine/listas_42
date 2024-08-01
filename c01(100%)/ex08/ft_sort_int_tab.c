/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrecine- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 18:29:32 by lrecine-          #+#    #+#             */
/*   Updated: 2024/07/22 17:52:27 by lrecine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	int	array[6] = {32, 85, 2, 74, 50, 12};
	int	i;

	i = 0;
	printf("Array passado: ");
	while (i < 6)
	{
		printf("%d ", array[i]);
		i++;
	}
	printf("\n");
	ft_sort_int_tab(array, i);
	i = 0;
	printf("Array na ordem: ");
	while (i < 6)
	{
		printf("%d ", array[i]);
		i++;
	}
	printf("\n");
	return (0);
}*/
