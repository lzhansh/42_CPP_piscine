# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/13 09:01:49 by lzhansha          #+#    #+#              #
#    Updated: 2020/01/13 10:19:08 by lzhansha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = clang++
FLAGS = -Wall -Wextra -Werror

SOURCES = megaphone.cpp
OBJECTS = $(SOURCES:.cpp=.o)

GREEN = \033[0;32m
YELLOW = \033[0;33m
RESET = \033[0m

all: $(NAME)

$(NAME): $(OBJECTS)
	@$(CC) $(OBJECTS) -o $(NAME)
	@echo "$(GREEN)./megaphone is ready to use$(RESET)"

%.o: %.cpp
	@$(CC) $(FLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJECTS)
	@echo "$(YELLOW)clean is done$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(YELLOW)fclean is done$(RESET)"

re: 
	@$(MAKE) fclean
	@$(MAKE) all

.PHONY: all clean fclean format re
