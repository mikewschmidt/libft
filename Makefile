# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mschmidt <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/19 20:10:33 by mschmidt          #+#    #+#              #
#    Updated: 2020/03/08 18:14:16 by mschmidt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a
SRC = *.c
BONUS = *bonus.c
CFLAGS = -Wall -Wextra -Werror 

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -c $(SRC)
	ar rc $(NAME) *.o 
	# REMOVE THIS LINE!!!!
#	gcc main.c -L. -lft -I.

bonus:	
	gcc $(CFLAGS) -c $(BONUS) $(SRC)
	ar rc $(NAME) *.o

so:
	gcc $(CFLAGS) -fPIC -c $(SRC)
	gcc -shared -o libft.so *.o
	ar rc $(NAME) *.o
	#gcc -L. -lft

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re:	fclean all

