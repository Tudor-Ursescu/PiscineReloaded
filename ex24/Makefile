# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/06 17:30:02 by tursescu          #+#    #+#              #
#    Updated: 2024/06/07 11:36:36 by tursescu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c \
	./srcs/ft_strlen.c ./srcs/ft_swap.c                
OBJS :=  $(SRCS:%.c=%.o)
CC = gcc
RM = rm -f
CCFLAGS = -Wall -Werror -Wextra -I.
NAME = libft.a
all: $(NAME)
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)            
clean:
	$(RM) $(OBJS)
fclean:  clean
	$(RM) $(NAME)  
re: fclean $(NAME)
.PHONY: all clean fclean re
