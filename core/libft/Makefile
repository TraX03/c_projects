# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xiwlim <xiwlim@student.42kl.edu.my>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/27 14:17:16 by xiwlim            #+#    #+#              #
#    Updated: 2025/11/03 12:53:38 by xiwlim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_bzero.c ft_memset.c ft_strlen.c ft_isalpha.c \
      ft_isdigit.c ft_tolower.c ft_toupper.c ft_isalnum.c \
      ft_isascii.c ft_isprint.c ft_memcpy.c ft_strrchr.c \
      ft_memchr.c ft_strnstr.c ft_atoi.c ft_strdup.c \
      ft_memmove.c ft_strlcat.c ft_strlcpy.c ft_strchr.c \
      ft_strncmp.c ft_memcmp.c ft_calloc.c ft_substr.c \
      ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
      ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
      ft_striteri.c ft_strmapi.c 
      
BNS = ft_lstsize.c ft_lstadd_front.c ft_lstlast.c ft_lstnew.c \
      ft_lstadd_back.c  ft_lstclear.c  ft_lstdelone.c  ft_lstiter.c \
      ft_lstmap.c

OBJ = ${SRC:.c=.o}
BNS_OBJ = ${BNS:.c=.o}

all: ${NAME}

${NAME}: ${OBJ}
	ar rcs ${NAME} ${OBJ}

bonus: ${OBJ} ${BNS_OBJ}
	ar rcs ${NAME} ${OBJ} ${BNS_OBJ}

clean: 
	rm -f ${OBJ} ${BNS_OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re bonus
