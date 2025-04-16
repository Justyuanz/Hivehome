NAME = libft.a
COMPILER = cc
COMPILERFLAGS = -Wall -Wextra -Werror
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_memset.c ft_bzero.c
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

.PHONY: all clean fclean re 