# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yhaouas <yhaouas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/28 14:34:13 by yhaouas           #+#    #+#              #
#    Updated: 2026/03/29 13:37:04 by yhaouas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				= cc
CFLAGS			= -Wall -Werror -Wextra
RM				= rm -rf
NAME 			= push_swap

SRCS			= main.c help_func_1.c help_func_2.c ft_split.c push_a_b_chunks.c \
				  indexing_func.c func_lnkdlst.c parsing.c push_a_b.c ra_rb_func.c \
				  rra_rrb_func.c func_of_sort.c func_of_sort1.c swap_function.c

OBJS			= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

%.o: %.c push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all