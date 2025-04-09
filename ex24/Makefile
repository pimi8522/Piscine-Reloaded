# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: miduarte <miduarte@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/08 11:23:18 by miduarte          #+#    #+#              #
#    Updated: 2025/04/08 16:22:09 by miduarte         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_DIR=srcs
HEADER_DIR=includes
FLAGS=-c -Wextra -Wall -Werror
COMPILE=cc
COMPLIB=ar rcs
SRCS=ft_putchar.c \
	 ft_putstr.c \
	 ft_strcmp.c \
	 ft_strlen.c \
	 ft_swap.c
LIBNAME=libft.a

ADD=$(addprefix $(SRC_DIR)/, $(SRCS))
OBJS=$(SRCS:.c=.o)

all: $(LIBNAME)

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(LIBNAME)
re: fclean all

$(OBJS):
	$(COMPILE) $(FLAGS) $(ADD)
$(LIBNAME): $(OBJS)
	$(COMPLIB) $(LIBNAME) $(OBJS)
