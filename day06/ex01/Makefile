# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lzhansha <lzhansha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/13 09:01:49 by lzhansha          #+#    #+#              #
#    Updated: 2020/01/22 11:16:58 by lzhansha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ser

CC = clang++
FLAGS = -Wall -Wextra -Werror

SOURCES = main.cpp

OBJECTS = $(SOURCES:.cpp=.o)

GREEN = \033[0;32m
YELLOW = \033[0;33m
RESET = \033[0m

all: $(NAME)

$(NAME): $(OBJECTS)
	@$(CC) $(OBJECTS) -o $(NAME)
	@echo "$(GREEN)./ser is ready to use$(RESET)"

%.o: %.cpp 
	@$(CC) $(FLAGS)  -o $@ -c $<

clean:
	@rm -f $(OBJECTS)
	@echo "$(YELLOW)clean is done$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(YELLOW)fclean is done$(RESET)"

re: 
	@$(MAKE) fclean
	@$(MAKE) all

.PHONY: all clean fclean re
