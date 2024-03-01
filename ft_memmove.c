/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marllore <marllore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:26:47 by marllore          #+#    #+#             */
/*   Updated: 2024/02/23 12:15:19 by marllore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	if ((dst == NULL) && (src == NULL))
		return (NULL);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 1;
	if (s < d)
	{
		while (i <= len)
		{
			d[len - i] = s[len - i];
			i++;
		}
	}
	else
		ft_memcpy(d, s, len);
	return (dst);
}

// The memmove() function copies len bytes from string src to string dst.
//  The two strings may overlap; the copy is always done
// in a non-destructive manner.

/*
int	main(void)
{
	char	src[] = "HelloWorld!";
	char	dest[20] = "Goodbyeworld!";

	printf("Before ft_memmove dest: %s, src = %s\n", dest, src);
	ft_memmove(dest, src, 10);
	printf("After ft_memmove dest: %s, src = %s\n", dest, src);
	return (0);
}
*/

/*
int	main(void) {
	char src[] = "Hello, world!";
	char dst[20];
		// Asegúrate de que dst tenga suficiente espacio para contener la copia
	ft_memmove(dst, src, 7); // Copia los primeros 7 caracteres de src a dst

	printf("Cadena copiada: %s\n", dst);

	return (0);
}
*/
