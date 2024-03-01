/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marllore <marllore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:26:47 by marllore          #+#    #+#             */
/*   Updated: 2024/02/22 10:34:16 by marllore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}

// writes len bytes of value c (converted to an unsigned char) to the string b

/*
int	main(void)
{
	char	str[50] = "hello world";

	printf("Before memset: %s\n", str);
	ft_memset(str, '-', 5);
	printf("After memset: %s\n", str);
	return (0);
}
*/
