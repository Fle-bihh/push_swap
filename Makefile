# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/11 17:24:38 by fle-biha          #+#    #+#              #
#    Updated: 2021/05/25 15:26:08 by fle-biha         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS			=	srcs/push_swap.c srcs/ft_fill_lst.c \
					srcs/move_1.c srcs/move_2.c \
					srcs/move_3.c srcs/ft_sort_500.c \
					srcs/utils_lst.c srcs/ft_sort_int.c \
					srcs/ft_sort_100.c srcs/ft_sort_3.c \
					srcs/ft_sort_4_5.c srcs/ft_sort.c \
					srcs/ft_parsing.c

OBJS			= $(SRCS:.c=.o)

CC				= @gcc
RM				= @/bin/rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= push_swap

LIBFT			= libft/libft.a

all:			$(NAME)

$(NAME):		compilation $(OBJS)
				@gcc $(OBJS) $(LIBFT) -o $(NAME)
				@echo "PUSH_SWAP COMPILED"

compilation:
				@make -C libft

clean:
				@make clean -C libft
				$(RM) $(OBJS)
				@echo "CLEAN"

fclean:			clean
				@make fclean -C libft
				$(RM) $(NAME)
				@echo "VERY CLEAN"

re:				fclean $(NAME)
