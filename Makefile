# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marallorente <marallorente@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/12 11:27:03 by marllore          #+#    #+#              #
#    Updated: 2024/03/02 20:16:59 by marallorent      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Werror -Wextra 
LIB_CMD			= ar -rcs
INDEX_CMD		= ranlib
INCS		= libft.h
SRCS = ft_isalpha.c \
	   ft_isdigit.c \
	   ft_isalnum.c \
	   ft_isascii.c \
	   ft_isprint.c \
	   ft_strlen.c \
	   ft_memset.c \
	   ft_bzero.c \
	   ft_memcpy.c \
	   ft_memmove.c \
	   ft_strlcpy.c \
	   ft_strlcat.c \
	   ft_toupper.c \
	   ft_tolower.c \
	   ft_strchr.c \
	   ft_strrchr.c \
	   ft_strncmp.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_strnstr.c \
	   ft_atoi.c \
	  
			  
OBJS		= $(SRCS:.c=.o)

RM			= rm -f

all: 		$(NAME)

$(NAME):	$(OBJS) $(INCS)
			$(LIB_CMD)	$(NAME) $(OBJS)
			$(INDEX_CMD) $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:		
			$(RM) $(OBJS) 

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re

