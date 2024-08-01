/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrecine- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:10:08 by lrecine-          #+#    #+#             */
/*   Updated: 2024/07/25 16:42:30 by lrecine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	alp[]= {"ABCDEFGH"};
        int		i;

	i = 0;
	ft_strlowcase(alp);
	while (alp[i] != '\0')
	{
		write(1, &alp[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}*/
