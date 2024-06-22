# Name of the library
NAME = libft.a

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I.


SRCS = src/ft_memset.c\
		src/ft_bzero.c\
		src/ft_memcpy.c\
		src/ft_memccpy.c\
		src/ft_memmove.c\
		src/ft_memchr.c\
		src/ft_memcmp.c\
		src/ft_strlen.c\
		src/ft_strdup.c
# Object files
OBJS = $(SRCS:.c=.o)

# Header files
HEADERS = libft.h

# Default target
all: $(NAME)

# Rule to create the library
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Rule to compile object files
%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

# Clean object files
clean:
	rm -f $(OBJS)

# Clean object files and the library
fclean: clean
	rm -f $(NAME)

# Rebuild everything
re: fclean all

# Phony targets
.PHONY: all clean fclean re
