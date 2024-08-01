/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrecine- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 19:21:15 by lrecine-          #+#    #+#             */
/*   Updated: 2024/07/25 16:43:06 by lrecine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
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
	char	num[]= {"-15"};
	char	nul[]= {'\0'};
	char	ff[]= {'\f'};
	char	c;
	int		r;

	r = ft_str_is_printable(alp);
	c = r + '0';
	write(1, &c, 1);
	write(1, "\n", 1);
	r = ft_str_is_printable(num);
	c = r + '0';
	write(1, &c, 1);
	write(1, "\n", 1);
	r = ft_str_is_printable(nul);
	c = r + '0';
	write(1, &c, 1);
	write(1, "\n", 1);
	r = ft_str_is_printable(ff);
	c = r + '0';
	write(1, &c, 1);
	write(1, "\n", 1);
}*/
