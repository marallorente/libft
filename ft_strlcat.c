/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marllore <marllore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:40:25 by marllore          #+#    #+#             */
/*   Updated: 2024/02/23 13:08:28 by marllore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	total_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	total_len = src_len + dst_len;
	if (dstsize <= dst_len)
	{
		return (src_len + dstsize);
	}
	if (src_len < dstsize - dst_len)
	{
		ft_memcpy(dst + dst_len, src, src_len + 1);
	}
	else
	{
		ft_memcpy(dst + dst_len, src, dstsize - dst_len - 1);
		dst[dstsize - 1] = '\0';
	}
	return (total_len);
}

/*
int	main(void)
{
	char	src[] = "Hello, world!";
	char	dst[20];
	size_t	len;

	char	src_long[] = "This string is too long for the
	destination buffer";
	
	// Prueba   1: Concatenar una cadena más corta que
	//el espacio disponible en el búfer de destino
	len = ft_strlcat(dst, src, sizeof(dst));
	printf("Cadena concatenada: %s\n", dst);
	printf("Longitud de la cadena concatenada: %zu\n", len);
	// Prueba   2: Concatenar una cadena más larga que el espacio
	//disponible en el búfer de destino
	len = ft_strlcat(dst, src_long, sizeof(dst));
	printf("Cadena concatenada: %s\n", dst);
	printf("Longitud de la cadena concatenada: %zu\n", len);
	return (0);
}
*/