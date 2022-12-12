NAME = Harl

SRC = Harl.cpp  main.cpp
		
CC = @c++ -std=c++98

CFLAGS = -Wall -Wextra -Werror

RM = @rm -f

all:		$(NAME)

OBJS	= $(SRC:.cpp=.o)

.cpp.o: $(SRC)
	$(CC) $(CFLAGS) -c $< -o $@
	
$(NAME):  $(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
			@echo "\033[0;32m®Harl CREATED 🐲\033[0m"

clean:
			$(RM) $(OBJS)
			@echo "\033[0;31m®Harl objects DELETED 🗑"

fclean:
			$(RM) $(NAME) $(OBJS)
			@echo "\033[0;31m®Harl DELETED 🗑"
			
re:			fclean all 