NAME		= Animal

INCLUDES	=	Animal.hpp		\
				Cat.hpp			\
				Dog.hpp			\
				WrongAnimal.hpp	\
				WrongCat.hpp	\

SRCS		=	main.cpp		\
				Animal.cpp		\
				Cat.cpp			\
				Dog.cpp			\
				WrongAnimal.cpp	\
				WrongCat.cpp	\

OBJS 		= 	${SRCS:.cpp=.o}

CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

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