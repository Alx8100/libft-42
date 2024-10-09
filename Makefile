# Name of the library
NAME = libft.a

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I.

# Source files
SRCS = src/ft_memset.c \
       src/ft_bzero.c \
       src/ft_memcpy.c \
       src/ft_memccpy.c \
       src/ft_memmove.c \
       src/ft_memchr.c \
       src/ft_memcmp.c \
       src/ft_strlen.c \
       src/ft_strdup.c \
       src/ft_strcpy.c \
       src/ft_strncpy.c \
       src/ft_strcat.c \
       src/ft_strncat.c \
       src/ft_strlcat.c \
       src/ft_strchr.c \
       src/ft_strrchr.c \
       src/ft_strstr.c \
       src/ft_strnstr.c \
       src/ft_strcmp.c\
       src/ft_strncmp.c \
       src/ft_atoi.c \
       src/ft_isalpha.c \
       src/ft_isdigit.c\
       src/ft_isalnum.c\
       src/ft_isascii.c\
       src/ft_isprint.c\
       src/ft_toupper.c\
       src/ft_tolower.c\
       src/ft_memalloc.c\
       src/ft_memdel.c\
       src/ft_strnew.c\
       src/ft_strdel.c\
       src/ft_strclr.c\
       src/ft_striter.c\
       src/ft_striteri.c\
       src/ft_strmap.c\
       src/ft_strmapi.c\
       src/ft_strequ.c\
       src/ft_strnequ.c\
       src/ft_strsub.c\
       src/ft_strjoin.c\
       src/ft_strtrim.c\
       src/ft_strsplit.c\

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
