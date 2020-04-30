# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mschmidt <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/19 20:10:33 by mschmidt          #+#    #+#              #
#    Updated: 2020/04/28 23:22:14 by mschmidt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a
SRC = ft_atoi.c ft_isdigit.c ft_lstclear.c ft_lstsize.c ft_memset.c ft_strchr.c  \
ft_bzero.c ft_isprint.c ft_lstdelone.c ft_memccpy.c ft_putchar_fd.c ft_strdup.c  \
ft_calloc.c ft_lstiter.c ft_memchr.c ft_putendl_fd.c ft_strjoin.c  \
ft_isalnum.c ft_itoa.c ft_lstlast.c ft_memcmp.c ft_putnbr_fd.c ft_strlcat.c  \
ft_isalpha.c ft_lstadd_back.c ft_lstmap.c ft_memcpy.c ft_putstr_fd.c ft_strlcpy.c  \
ft_isascii.c ft_lstadd_front.c ft_lstnew.c ft_memmove.c ft_split.c ft_strlen.c  \
ft_tolower.c ft_toupper.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c  \
ft_strtrim.c ft_substr.c      

OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror 

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJ)

#so:
#	gcc $(CFLAGS) -fPIC -c $(SRC)
#	gcc -shared -o libft.so *.o
#	ar rc $(NAME) *.o

clean:
	/bin/rm -f $(OBJ) 

fclean: clean
	/bin/rm -f $(NAME)

re:	fclean all

