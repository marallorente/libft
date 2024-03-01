/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marllore <marllore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:26:47 by marllore          #+#    #+#             */
/*   Updated: 2024/02/22 10:33:41 by marllore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

// writes n zeroed bytes to the string s. If n is zero, bzero() does nothing

/*
int	main(void)
{
	char	str[20] = "Hello World!";

	printf("Before bzero: %s\n", str);
	ft_bzero(str, 5);
	printf("After bzero: ");
	for (size_t i = 0; i < sizeof(str); i++)
	{
		printf("%x ", (unsigned char)str[i]);
	}
	printf("\n");
	return (0);
}
*/
