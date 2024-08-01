/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrecine- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 19:17:00 by lrecine-          #+#    #+#             */
/*   Updated: 2024/07/24 18:49:51 by lrecine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z' ))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	alp[]= {"ABC"};
	char	al[]= {"AbC"};
	char	a[]= {"abc"};
	char	nul[]= {'\0'};
	char	c;
	int		r;

	r = ft_str_is_lowercase(alp);
	c = r + '0';
	write(1, &c, 1);
	write(1, "\n", 1);
	r = ft_str_is_lowercase(al);
	c = r + '0';
	write(1, &c, 1);
	write(1, "\n", 1);
	r = ft_str_is_lowercase(a);
	c = r + '0';
	write(1, &c, 1);
	write(1, "\n", 1);
	r = ft_str_is_lowercase(nul);
	c = r + '0';
	write(1, &c, 1);
	write(1, "\n", 1);
}*/
