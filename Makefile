# Name of the library
NAME = libft.a

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I.

# Source files
SRCS = ft_memset.c \
       ft_bzero.c \
       ft_memcpy.c \
       ft_memccpy.c \
       ft_memmove.c \
       ft_memchr.c \
       ft_memcmp.c \
       ft_strlen.c \
       ft_strdup.c \
       ft_strcpy.c \
       ft_strncpy.c \
       ft_strcat.c \
       ft_strncat.c \
       ft_strlcat.c \
       ft_strchr.c \
       ft_strrchr.c \
       ft_strstr.c \
       ft_strnstr.c \
       ft_strcmp.c\
       ft_strncmp.c \
       ft_atoi.c \
       ft_isalpha.c \
       ft_isdigit.c\
       ft_isalnum.c\
       ft_isascii.c\
       ft_isprint.c\
       ft_toupper.c\
       ft_tolower.c\
       ft_memalloc.c\
       ft_memdel.c\
       ft_strnew.c\
       ft_strdel.c\
       ft_strclr.c\
       ft_striter.c\
       ft_striteri.c\
       ft_strmap.c\
       ft_strmapi.c\
       ft_strequ.c\
       ft_strnequ.c\
       ft_strsub.c\
       ft_strjoin.c\
       ft_strtrim.c\
       ft_strsplit.c\
       ft_itoa.c\
       ft_putchar.c\
       ft_putstr.c\
       ft_putendl.c\
       ft_putnbr.c\
       ft_putchar_fd.c\
       ft_putstr_fd.c\
       ft_putendl_fd.c\
       ft_putnbr_fd.c\
       ft_lstnew.c\
       ft_lstdelone.c\
       ft_lstadd.c\
       ft_lstiter.c\
       ft_lstmap.c

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
