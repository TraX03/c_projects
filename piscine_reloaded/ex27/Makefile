# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xiwlim <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/15 13:51:33 by xiwlim            #+#    #+#              #
#    Updated: 2025/10/15 14:21:16 by xiwlim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = ft_display_file

all: $(NAME)

$(NAME) : $(NAME).c
	$(CC) $(CFLAGS) $< -o $(NAME)

clean:
	@echo "idk what to here"

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

