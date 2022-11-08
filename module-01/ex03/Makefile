# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omeslall <omeslall@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 14:20:26 by omeslall          #+#    #+#              #
#    Updated: 2022/11/08 14:24:06 by omeslall         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Human

SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
		
CC = @c++ -std=c++98 -g

CFLAGS = -Wall -Wextra -Werror

RM = @rm -f

all:		$(NAME)

OBJS	= $(SRC:.cpp=.o)

.cpp.o: $(SRC)
	$(CC) $(CFLAGS) -c $< -o $@
	
$(NAME):  $(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
			@echo "\033[0;32m®Human CREATED 🐲\033[0m"

clean:
			$(RM) $(OBJS)
			@echo "\033[0;31mHuman objects DELETED 🗑"

fclean:
			$(RM) $(NAME) $(OBJS)
			@echo "\033[0;31mHuman DELETED 🗑"
			
re:			fclean all 