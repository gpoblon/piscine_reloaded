NAME =	libft.a

SRCS =	srcs/ft_putchar.c \
		srcs/ft_putstr.c \
		srcs/ft_strcmp.c \
		srcs/ft_strlen.c \
		srcs/ft_swap.c

OBJS =	ft_putchar.o \
		ft_putstr.o \
		ft_strcmp.o \
		ft_strlen.o \
		ft_swap.o

INC = includes/

all:	$(NAME)

$(NAME):
			gcc -Wall -Werror -Wextra -I$(INC) -c $(SRCS)
			ar rc $(NAME) $(OBJS)

clean:
			rm -rf $(OBJS)

fclean: clean
			rm -rf $(NAME)

re:		fclean all
