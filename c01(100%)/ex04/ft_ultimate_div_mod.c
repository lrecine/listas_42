/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrecine- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 18:04:15 by lrecine-          #+#    #+#             */
/*   Updated: 2024/07/21 12:53:13 by lrecine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_div;
	int	temp_mod;

	temp_div = *a / *b;
	temp_mod = *a % *b;
	*a = temp_div;
	*b = temp_mod;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 8;
	b = 7;
	ft_ultimate_div_mod(&a, &b);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	return (0);
}*/
