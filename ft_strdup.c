/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marallorente <marallorente@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:37:43 by marllore          #+#    #+#             */
/*   Updated: 2024/03/03 12:35:33 by marallorent      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
    char	*ptr;
    size_t	len;

    len = ft_strlen(s1) + 1;
    ptr = malloc(len);
    if (!ptr)
        return (0);
    ft_memcpy(ptr, s1, len);
    return (ptr);
}

/*
int main(void)
{
    char *s1 = "Hello, world!";
    char *ptr;

    ptr = ft_strdup(s1);
    printf("The string is: %s\n", ptr);
    return (0);
}
*/