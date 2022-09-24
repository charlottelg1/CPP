NAME		= UnecessaryViolence

INCLUDES	=	Weapon.hpp      \
				HumanA.hpp      \
				HumanB.hpp      \

SRCS		=	main.cpp		\
				HumanA.cpp      \
				HumanB.cpp      \
				Weapon.cpp      \

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