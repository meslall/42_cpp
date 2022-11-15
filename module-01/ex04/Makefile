# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omeslall <omeslall@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/12 15:12:00 by omeslall          #+#    #+#              #
#    Updated: 2022/11/12 16:53:00 by omeslall         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Replace

SRC = main.cpp 
		
CC = @c++ -std=c++98 -g

CFLAGS = -Wall -Wextra -Werror

RM = @rm -f

all:		$(NAME)

OBJS	= $(SRC:.cpp=.o)

.cpp.o: $(SRC)
	$(CC) $(CFLAGS) -c $< -o $@
	
$(NAME):  $(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
			@echo "\033[0;32m®Replace CREATED 🐲\033[0m"

clean:
			$(RM) $(OBJS)
			@echo "\033[0;31mReplace objects DELETED 🗑"

fclean:
			$(RM) $(NAME) $(OBJS)
			@echo "\033[0;31mReplace DELETED 🗑"
			
re:			fclean all