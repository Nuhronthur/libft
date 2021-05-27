NAME = libft.a
SRC_NAME = $(addprefix ft_,$(addsuffix .c,\
atoi\
bzero\
isalpha\
isascii\
isdigit\
isprint\
memccpy\
memchr\
memcmp\
memcpy\
memmove\
memset\
strchr\
strlcat\
strlcpy\
strlen\
strncmp\
strrchr\
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