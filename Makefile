SRCS	=	ft_isalnum.c\
		   	ft_isalpha.c\
		   	ft_isdigit.c\
		   	ft_isascii.c\
		   	ft_isprint.c\
			ft_strlen.c\
			ft_toupper.c\
			ft_tolower.c\
			ft_strchr.c\
			ft_strrchr.c

OBJS	= 	${SRCS:.c=.o}

NAME	=	libft.a

CC		= 	cc

RM		= 	rm -f

CFLAGS	= 	-Wall -Wextra -Werror

.c.o:	= 	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}

all:		${NAME}

clean:		
			${RM} ${OBJS}

fclean: 	clean
			${RM} ${NAME}

re:			fclean all

.PHONY:	all clean fclean re	
