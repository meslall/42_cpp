NAME = Bureaucrat

SRC = Bureaucrat.cpp PresidentialPardonForm.cpp ShrubberyCreationForm.cpp Form.cpp \
		RobotomyRequestForm.cpp main.cpp Intern.cpp \
		
CC = @c++ -std=c++98 -g

CFLAGS = -Wall -Wextra -Werror

RM = @rm -f

all:		$(NAME)

OBJS	= $(SRC:.cpp=.o)

.cpp.o: $(SRC)
	$(CC) $(CFLAGS) -c $< -o $@
	
$(NAME):  $(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
			@echo "\033[0;32m®Bureaucrat CREATED 🐲\033[0m"

clean:
			$(RM) $(OBJS)
			@echo "\033[0;31m®Bureaucrat objects DELETED 🗑"

fclean:
			$(RM) $(NAME) $(OBJS)
			@echo "\033[0;31m®Bureaucrat DELETED 🗑"
			
re:			fclean all 