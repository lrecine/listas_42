/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrecine- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 11:51:41 by lrecine-          #+#    #+#             */
/*   Updated: 2024/07/25 13:41:40 by lrecine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	a[] = "abcDEfgH";
	int		i;
	
	i = 0;
	ft_strupcase(a);
	while (a[i] != '\0')
	{
		write(1, &a[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}*/
