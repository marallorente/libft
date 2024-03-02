/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marallorente <marallorente@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:37:43 by marllore          #+#    #+#             */
/*   Updated: 2024/03/02 12:45:46 by marallorent      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
    int	i;
    char ch;

    ch = (unsigned char)c;
    i = ft_strlen(str);  
    while (i >= 0)
    {
        if (str[i] == ch)
            return ((char *)&str[i]);
        i--;
    }
    return (0);
}
	
/*
int main(void) 
{
	char str[] = "Hello World";
	char ch = 'o';
	char *foundChar;

	foundChar = ft_strrchr(str, ch);
	printf("String after |%c| is - |%s|\n", ch, foundChar);
	return(0);
}
*/
