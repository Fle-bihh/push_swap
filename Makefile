# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/11 17:24:38 by fle-biha          #+#    #+#              #
#    Updated: 2021/05/11 18:01:23 by fle-biha         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS			= srcs/push_swap.c

OBJS			= $(SRCS:.c=.o)

CC				= @gcc
RM				= @/bin/rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= push_swap

LIBFT			= srcs/libft/libft.a

all:			$(NAME)

$(NAME):		compilation $(OBJS)
				@gcc $(OBJS) $(LIBFT) -o $(NAME)
				@mkdir -p .obj
				@mv $(OBJS) .obj
				@echo "PUSH_SWAP COMPILED"

compilation:
				@make -C srcs/libft

clean:
				@make clean -C srcs/libft
				$(RM) $(OBJS)
				@echo "CLEAN"

fclean:			clean
				@make fclean -C srcs/libft
				$(RM) $(NAME)
				@echo "VERY CLEAN"

re:				fclean $(NAME)
