
NAME = Harl

SRC = main.cpp Harl.cpp
		
CC = @c++ -std=c++98 -g

CFLAGS = -Wall -Wextra -Werror

RM = @rm -f

all:		$(NAME)

OBJS	= $(SRC:.cpp=.o)

.cpp.o: $(SRC)
	$(CC) $(CFLAGS) -c $< -o $@
	
$(NAME):  $(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
			@echo "\033[0;32m®CREATED 🐲\033[0m"

clean:
			$(RM) $(OBJS)
			@echo "\033[0;31mobjects DELETED 🗑"

fclean:
			$(RM) $(NAME) $(OBJS)
			@echo "\033[0;31mDELETED 🗑"
			
re:			fclean all