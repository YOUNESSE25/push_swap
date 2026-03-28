# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yhaouas <yhaouas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/28 14:34:13 by yhaouas           #+#    #+#              #
#    Updated: 2026/03/28 14:34:14 by yhaouas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				= cc
CFLAGS			= -Wall -Werror -Wextra
RM				= rm -rf
NAME 			= push_swap
OBJ_DIR			= object
SRCS_DIR		= Mandatory


SRCS			= $(SRCS_DIR)/main.c $(SRCS_DIR)/help_func_1.c $(SRCS_DIR)/help_func_2.c $(SRCS_DIR)/ft_split.c $(SRCS_DIR)/push_a_b_chunks.c\
                  $(SRCS_DIR)/indexing_func.c $(SRCS_DIR)/func_lnkdlst.c $(SRCS_DIR)/parsing.c $(SRCS_DIR)/push_a_b.c $(SRCS_DIR)/ra_rb_func.c\
				  $(SRCS_DIR)/rra_rrb_func.c $(SRCS_DIR)/func_of_sort.c $(SRCS_DIR)/func_of_sort1.c $(SRCS_DIR)/swap_function.c

OBJS			= $(SRCS:$(SRCS_DIR)/%.c=$(OBJ_DIR)/%.o)


all: $(OBJ_DIR) $(NAME)

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) -o $@ $(OBJS)

$(OBJ_DIR)/%.o: $(SRCS_DIR)/%.c $(SRCS_DIR)/push_swap.h
		$(CC) $(CFLAGS) -o $@ -c $<

$(OBJ_DIR):
		@mkdir $@

clean:
		$(RM) $(OBJ_DIR) $(OBJ_DIR_BONUS)

fclean: clean
		$(RM) $(NAME) $(BONUS_NAME)

re:	fclean all
