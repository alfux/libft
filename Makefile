# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afuchs <afuchs@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/21 14:54:20 by afuchs            #+#    #+#              #
#    Updated: 2022/02/21 17:57:41 by afuchs           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= sources/*.c

FLAGS		= -Wall -Wextra -Werror

OBJ			= $(SRCS:.c=.o)

NAME		= debug

$(NAME)	:	$(OBJ)
			gcc $(FLAGS) $(OBJ) -o $(NAME)

$(OBJ)	:	$(SRCS)
			gcc -c $(FLAGS) $(SRCS)
			mv *.o sources

all		:	$(NAME)

clean	:
			rm -f $(OBJ)

fclean	:	clean
			rm -f $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re
