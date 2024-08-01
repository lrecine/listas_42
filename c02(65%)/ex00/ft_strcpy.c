/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrecine- <lrecine-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 17:56:52 by lrecine-          #+#    #+#             */
/*   Updated: 2024/07/24 18:54:31 by lrecine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	str[] = "Hello World";
	char	dest[12];
	int		i;

	i = 0;
	ft_strcpy(dest, str);
	write(1, "String copiada: ", 16);
	while (i < 12)
	{
		write(1, &dest[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}*/
