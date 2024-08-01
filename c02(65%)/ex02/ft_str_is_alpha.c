/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrecine- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 16:19:05 by lrecine-          #+#    #+#             */
/*   Updated: 2024/07/24 18:51:11 by lrecine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
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
	char	al[] = {"AbC"};
	char	nu[] = {"12"};
	char	c;
	int		r;

	r = ft_str_is_alpha(al);
	c = r + 48;
	write(1, &c, 1);
	write(1, "\n", 1);
	r = ft_str_is_alpha(nu);
	c = r + 48;
	write(1, &c, 1);
	write(1, "\n", 1);
}*/
