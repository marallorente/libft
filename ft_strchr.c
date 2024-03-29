/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marallorente <marallorente@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:37:43 by marllore          #+#    #+#             */
/*   Updated: 2024/03/02 11:04:32 by marallorent      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;
	char ch;

	i = 0;
	ch = (unsigned char)c;
	while	(str[i] != '\0')
    {
        if (str[i] == ch)
            return ((char *)&str[i]);
		i++;
    }
	if (ch == '\0')
		return ((char *)&str[i]);
	return (NULL);
}
/*
int main(void) 
{
	char str[] = "Hello World";
	char ch = 'o';
	char *foundChar;

	foundChar = ft_strchr(str, ch);
	printf("String after |%c| is - |%s|\n", ch, foundChar);
	return(0);
}
*/