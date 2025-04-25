# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jinzhang <jinzhang@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/17 10:55:26 by jinzhang          #+#    #+#              #
#    Updated: 2025/04/25 14:35:56 by jinzhang         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
COMPILER = cc
COMPILERFLAGS = -Wall -Wextra -Werror
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
		ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
		ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c \
		ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strrchr.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c
	$(COMPILER) $(COMPILERFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

#“Create (or update) a static library called libft.a, 
#and include these object files (ft_strlen.o, ft_putchar.o) in it. 
#Also generate a symbol index so the linker can use it efficiently later.”

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
#The -f option in rm -f means Force deletion. fclean meant to be a "full clean" 
#— it should remove everything that was generated, including.o files,
#done by clean the library file libft.a → done in the fclean target itself

re: fclean all

test: test.c
		cc $< $(NAME) -o $@ -lbsd
		./$@

.PHONY: all clean fclean re 
