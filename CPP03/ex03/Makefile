NAME		= Diamond

INCLUDES	=	ClapTrap.hpp	\
				ScavTrap.hpp	\
				FragTrap.hpp	\
				DiamondTrap.hpp	\

SRCS		=	main.cpp		\
				ClapTrap.cpp	\
				ScavTrap.cpp	\
				FragTrap.cpp	\
				DiamondTrap.cpp	\

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