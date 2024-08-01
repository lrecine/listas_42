/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrecine- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 18:16:48 by lrecine-          #+#    #+#             */
/*   Updated: 2024/07/28 16:37:05 by lrecine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	f;

	f = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (f < nb && src[f] != '\0')
	{
		dest[i] = src[f];
		i++;
		f++;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include <stdio.h>
int	main(void)
{
	char	dest [] = {"Hello"};
	char	src [] = {"World"};
	unsigned int		nb;

	nb = 2;
	printf("resultado: %s\n", ft_strncat(dest, src, nb));
}*/
