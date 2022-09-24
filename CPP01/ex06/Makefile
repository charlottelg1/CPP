NAME		= HarlFilter

INCLUDES	=	Harl.hpp         \

SRCS		=	main.cpp		\
				Harl.cpp        \

OBJS 		= 	${SRCS:.cpp=.o}

CC			= c++
CFLAGS		= -Wall -Wextra -Werror -Wno-implicit-fallthrough -std=c++98

.cpp.o:
	${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

all: $(NAME)

$(NAME): $(OBJS)
	${CC} $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "$(NAME) created"

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re