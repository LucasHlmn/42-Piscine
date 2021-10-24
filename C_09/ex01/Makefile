# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhoulman </var/mail/lhoulman>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/19 17:57:59 by lhoulman          #+#    #+#              #
#    Updated: 2021/10/19 22:11:51 by lhoulman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
SOURCES = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c srcs/ft_swap.c
OBJS = $(SOURCES:.c=.o)
LIBRARY = libft.a
FLAGS = -Wall -Wextra -Werror
HEADER = includes
RM = rm -f
COMPILER = gcc
LIBRARYMAKE = ar rc
INDEXMAKE = ranlib

.c.o:
	$(COMPILER) $(FLAGS) -c $< -o $(<:.c=.o) -I $(HEADER)

$(LIBRARY): $(OBJS)
	$(LIBRARYMAKE) $(LIBRARY) $(OBJS)
	$(INDEXMAKE) $(LIBRARY)

all: $(LIBRARY)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(LIBRARY)

re: fclean all


