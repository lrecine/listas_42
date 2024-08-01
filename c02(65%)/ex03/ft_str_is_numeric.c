/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrecine- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 16:52:27 by lrecine-          #+#    #+#             */
/*   Updated: 2024/07/24 18:50:31 by lrecine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9' ))
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
	char	nu[]= {"123"};
	char	num[]= {"-15"};
	char	nul[]= {'\0'};
	char	c;
	int		r;

	r = ft_str_is_numeric(alp);
	c = r + '0';
	write(1, &c, 1);
	write(1, "\n", 1);
	r = ft_str_is_numeric(nu);
	c = r + '0';
	write(1, &c, 1);
	write(1, "\n", 1);
	r = ft_str_is_numeric(num);
	c = r + '0';
	write(1, &c, 1);
	write(1, "\n", 1);
	r = ft_str_is_numeric(nul);
	c = r + '0';
	write(1, &c, 1);
	write(1, "\n", 1);
}*/
