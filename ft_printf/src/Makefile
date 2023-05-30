NAME	= libftprintf.a
SRCS	= ft_formats.c \
		  ft_printchar.c \
		  ft_printdeci.c \
		  ft_printf.c \
		  ft_printhex.c \
		  ft_printpercent.c \
		  ft_printptr.c \
		  ft_printstr.c \
		  ft_printunsigned.c \
		  ft_printbin.c \
		
HDS		= ft_printf.h
OBJS	= $(SRCS:.c=.o)
CC		= cc
CFLAGS	= -Wall -Wextra -Werror

all:	$(NAME)

$(NAME):	$(OBJS) $(HDS)
	$(CC) $(CFLAGS) -c $(SRCS)
	ar rcs $(NAME) $(OBJS)

clean:
		rm -f $(OBJS)

fclean:	clean
		rm -f $(NAME)

re:	fclean all

bonus: all

.PHONY : all clean fclean re bonus
