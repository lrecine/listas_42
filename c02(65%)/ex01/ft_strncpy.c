/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrecine- <lrecine-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 19:19:17 by lrecine-          #+#    #+#             */
/*   Updated: 2024/07/25 15:30:08 by lrecine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int     main(void)
{
	char    str[] = "Hello World";
	char    dest[12];
	unsigned int		n;
	unsigned int		i;

	n = 3;
	i = 0;
	ft_strncpy(dest, str, n);
	write(1, "String copiada: ", 16);
	while (i < n)
	{
		write(1, &dest[i], 1);
		i++;
	}
	write(1, "\n", 1);

	return (0);
}*/
