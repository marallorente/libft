/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marllore <marllore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:26:47 by marllore          #+#    #+#             */
/*   Updated: 2024/02/22 10:34:02 by marllore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned const char *)src)[i];
		i++;
	}
	return (dst);
}

// The memcpy() function copies n bytes from memory area src to memory area dst.
// If dst and src overlap, behavior is undefined,
// so is better using memmove() instead.

/*
int	main(void)
{
	char	str[30] = "Hello World!";
	char	str2[20] = "Goodbye World!";

	printf("Before memcpy: %s\n", str);
	ft_memcpy(str, str2, 5);
	printf("After memcpy: %s\n", str);
	return (0);
}
*/
