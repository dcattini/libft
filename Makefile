# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcattini <dcattini@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/18 17:10:59 by dcattini          #+#    #+#              #
#    Updated: 2022/03/23 17:53:14 by dcattini         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAG = -Wall -Werror -Wextra

CFILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		 ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strncmp.c ft_atoi.c \
		 ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
		 ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c \
		 ft_atoi.c ft_memchr.c ft_memcmp.c\
		 ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c\
		 ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
		 ft_itoa.c ft_striteri.c ft_strmapi.c ft_split.c\

BONUS =  ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c\
		 ft_lstiter.c ft_lstdelone.c ft_lstclear.c ft_lstmap.c\

OBJECTS = $(CFILES:.c=.o)

BOBJECTS = $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)
	@echo "libft.a is ok"

%.o: %.c
	$(CC) $(CFLAG) -c -o $@ $^

clean:
	rm -rf $(OBJECTS) $(BOBJECTS)

fclean:	clean
	rm -rf $(NAME)

re: fclean all

bonus: $(BOBJECTS) $(OBJECTS)
	ar rcs $(NAME) $(BOBJECTS) $(OBJECTS)
	@echo "libft.a is ok"

.PHONY: all %.o clean fclean re bonus
