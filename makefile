# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jovella <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/14 13:01:03 by jovella           #+#    #+#              #
#    Updated: 2021/06/14 13:01:07 by jovella          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC_NAME = $(addprefix ft_,$(addsuffix .c,\
affect\
atoi\
bzero\
calloc\
freedom\
hmstr\
intisn\
intl\
isalnum\
isalpha\
isascii\
isdigit\
isprint\
itoa\
memccpy\
memchr\
memcmp\
memcpy\
memmove\
memset\
putchar_fd\
putendl_fd\
putnbr_fd\
putstr_fd\
split\
split\
strchr\
strdup\
strjoin\
strlcat\
strlcpy\
strlen\
strmapi\
strmapi\
strncmp\
strnstr\
strrchr\
strtrim\
substr\
tolower\
toupper\))\
OBJ_NAME = $(SRC_NAME:.c=.o)
CC = gcc -Wall -Wextra -Werror

all: $(NAME)
$(NAME): $(OBJ_NAME)
	@echo "Creation of $(NAME)...\n"
	@ar rc $(NAME) $(OBJ_NAME)
	@ranlib $(NAME)
	@echo "$(NAME) created\n"
	@make clean
$(OBJ_NAME)%.o: %.c
	@$(CC) -o $@ -c $<
clean:
	@echo "Removal of .o files of $(NAME)..."
	@rmdir $(OBJ_NAME) 2> /dev/null || true
	@echo "Files .o deleted\n"
fclean: clean
	@echo "Removal of $(NAME)"
	@rm -f $(NAME)
	@echo "Binary $(NAME) deleted\n"
re: fclean all
.PHONY: all, clean, fclean, re
norme:
	@norminette $(OBJ_NAME)
