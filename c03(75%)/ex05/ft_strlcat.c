/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrecine- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 18:32:00 by lrecine-          #+#    #+#             */
/*   Updated: 2024/07/29 13:30:53 by lrecine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = ft_str_len(dest);
	j = ft_str_len(src);
	k = i + j;
	if (i >= size)
		return (j + size);
	else
	{
		j = 0;
		while (src[j] != '\0' && i < size)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		while (i < size)
		{
			dest[i] = '\0';
			i++;
		}
		return (k);
	}
}
/*#include <stdio.h>
int	main(void)
{
	char	dest[20] = {"Hello"};
	char	src[] = {" World!"};
	unsigned int		size = 5;

	printf("%d\n", ft_strlcat(dest, src, size));
	printf("'%s'\n", dest);
}*/
