# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omeslall <omeslall@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/13 15:56:31 by kdoulyaz          #+#    #+#              #
#    Updated: 2022/09/25 17:57:43 by omeslall         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC = megaphone.cpp
		
CC = @c++ -std=c++98

CFLAGS = -Wall -Wextra -Werror

RM = @rm -f

all:		$(NAME)

OBJS	= $(SRC:.cpp=.o)

.cpp.o: $(SRC)
	$(CC) $(CFLAGS) -c $< -o $@
	
$(NAME):  $(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
			@echo "\033[0;32m®megaphone CREATED 🐲\033[0m"

clean:
			$(RM) $(OBJS)
			@echo "\033[0;31mmegaphone objects DELETED 🗑"

fclean:
			$(RM) $(NAME) $(OBJS)
			@echo "\033[0;31mmegaphone DELETED 🗑"
			
re:			fclean all 