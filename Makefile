# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tjooris <tjooris@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/18 15:04:51 by tjooris           #+#    #+#              #
#    Updated: 2024/12/16 11:26:03 by tjooris          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	ft_printf.c ft_printflen.c ft_printstr.c \
        ft_char.c ft_str.c ft_integer.c ft_hexa.c \
		ft_pointer.c ft_unsigned.c ft_utils.c

OBJ = $(SRC:.c=.o)

DEP = $(SRC:.c=.d)

CC	=	cc
RM	=	rm -f
CFLAGS	=	-Wall -Wextra -Werror -MMD -MP

NAME	=	libftprintf.a

all:	$(NAME)

$(NAME) :	$(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ) $(DEP)

fclean: clean
	$(RM) $(NAME) $(DEP)



-include $(DEP)

.PHONY:            all clean fclean re bonus