# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/11 17:24:38 by fle-biha          #+#    #+#              #
#    Updated: 2021/05/31 13:33:57 by fle-biha         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS			=	srcs/push_swap.c srcs/ft_fill_lst.c \
					srcs/move_1.c srcs/move_2.c \
					srcs/move_3.c srcs/ft_sort_500.c \
					srcs/utils_lst.c srcs/ft_sort_int.c \
					srcs/ft_sort_100.c srcs/ft_sort_3.c \
					srcs/ft_sort_4_5.c srcs/ft_sort.c \
					srcs/ft_parsing.c srcs/ft_verif_duplicate.c
OBJS			= $(SRCS:.c=.o)

CC				= @gcc

RM				= @/bin/rm -f

CFLAGS			= -Wall -Wextra -Werror

LIB				= libft/libft.a

NAME			= push_swap

HEADER			= incs/push_swap.h

.c.o:			$(HEADER) $(LIB)
				$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all:			compil $(NAME)

compil:
				@make -C libft

$(OBJS):		$(HEADER)

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) $(OBJS) -I $(HEADER) $(LIB) -o $(NAME)
				@echo "PUSH_SWAP COMPILED"

clean:
				$(RM) $(OBJS)
				@make clean -C libft
				@echo "PUSH_SWAP CLEAN"

fclean:			clean
				$(RM) $(NAME)
				@make fclean -C libft
				@echo "PUSH_SWAP FCLEAN"

re:				fclean all

.PHONY:			all clean fclean re
