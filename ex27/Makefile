# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/07 12:59:05 by tursescu          #+#    #+#              #
#    Updated: 2024/06/07 16:20:57 by tursescu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_display_file.c

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

NAME = ft_display_file

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(SRCS) $(CFLAGS) -o $(NAME)
	
clean:
	$(RM) $(OBJS)
	
fclean: clean
	$(RM) $(NAME)
	
.PHONY: all clean fclean