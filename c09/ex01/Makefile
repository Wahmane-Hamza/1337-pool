# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/06 22:26:13 by hwahmane          #+#    #+#              #
#    Updated: 2023/09/06 23:39:44 by hwahmane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c srcs/ft_swap.c
OBJS = $(SRCS:.c=.o)
INCS = includes
NAME = libft.a
CC =cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
%.o %.c
	$(CC) $(CFLAGS) -c %< -o $@ -I $(INCS)
$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	
re: fclean all