/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marllore <marllore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:40:25 by marllore          #+#    #+#             */
/*   Updated: 2024/02/22 12:36:31 by marllore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	if (dstsize < 1)
		return (len);
	i = 0;
	while (src[i] != '\0' && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

/*
int	main(void)
{
	char	src[] = "Hello, world!";
	char	dst[20];
	size_t	len;

	len = ft_strlcpy(dst, src, sizeof(dst));
	printf("Cadena copiada: %s\n", dst);
	printf("Longitud de la cadena copiada: %zu\n", len);
	return (0);
}
*/