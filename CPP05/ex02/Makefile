NAME		= ShrubRobotPrez

INCLUDES	=	Bureaucrat.hpp				\
				AForm.hpp					\
				ShrubberyCreationForm.hpp	\
				RobotomyRequestForm.hpp		\
				PresidentialPardonForm.hpp	\


SRCS		=	main.cpp					\
				Bureaucrat.cpp				\
				AForm.cpp					\
				ShrubberyCreationForm.cpp	\
				RobotomyRequestForm.cpp		\
				PresidentialPardonForm.cpp	\

OBJS 		= 	${SRCS:.cpp=.o}

CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

.cpp.o:
	${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

all: $(NAME)

$(NAME): $(OBJS)
	${CC} $(CFLAGS) -I includes $(OBJS) -o $(NAME)
	@echo "$(NAME) created"

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re