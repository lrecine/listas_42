/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrecine- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:11:49 by lrecine-          #+#    #+#             */
/*   Updated: 2024/07/25 16:42:02 by lrecine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strlowcase(char *pstr)
{
	int	i;

	i = 0;
	while (pstr[i] != '\0')
	{
		if (pstr[i] >= 'A' && pstr[i] <= 'Z')
		{
			pstr[i] = pstr[i] + 32;
		}
		i++;
	}
	return (pstr);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	p;

	i = 0;
	p = -1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (p == -1 || (str[p] < 'a' || str[p] > 'z'))
		{
			if (str[p] < 'A' || str[p] > 'Z')
			{
				if (str[p] < 48 || str[p] > 57)
				{
					if (str[i] >= 'a' && str[i] <= 'z')
					{
						str[i] = str[i] - 32;
					}
				}
			}
		}
		p = i;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	w[] = {"oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um"};
	int		i;

	i = 0;
	ft_strcapitalize(w);
	while (w[i] != '\0')
	{
		write(1, &w[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}*/
