NAME	= projectEuler.a

SRCS	= ft_is_prime_number.c \
		ft_largest_nb_in_array.c \
		ft_prime_number_under_limit.c \
		ft_product_of_array.c \
		ft_fibonnacci.c \
		ft_sum_even_nb_array.c

OBJS	= ${SRCS:.c=.o}

HEADER	= includes

CC		= gcc
RM		= rm -f
AR		= ar rcs

CFLAGS = -Wall -Wextra -Werror

%.o: %.c
			${CC} -c ${CFLAGS} -o $@ $<

all: $(NAME)

$(NAME):	$(OBJS)
			$(AR) $@ $^

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re: fclean all

.PHONY:	all clean fclean bonus re
