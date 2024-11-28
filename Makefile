# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tjooris <tjooris@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/18 15:04:51 by tjooris           #+#    #+#              #
#    Updated: 2024/11/28 16:27:35 by tjooris          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_printf.c ft_printflen.c ft_printfstr.c \
			ft_char.c ft_str.c ft_integer.c ft_hexa.c \
			ft_pointer.c ft_unsigned.c ft_utils.c

OBJ =	$(SRCS:.c=.o)

CC	=	cc

RM	=	rm -f

CFLAGS	=	-Wall -Wextra -Werror -MMD -MP

NAME	=	libftprintf.a

all:	$(NAME)

$(NAME) :	$(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:	clean
	$(RM) $(OBJS) $(DEP)

-include $(DEP)

.PHONY:            all clean fclean re bonus