# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/07 13:16:28 by tsannie           #+#    #+#              #
#    Updated: 2021/09/22 16:55:47 by tsannie          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= array_class
CC			= @clang++
CFLAGS		= -Wall -Wextra -Werror
RM			= @rm -rf

BLACK		:= $(shell tput -Txterm setaf 0)
RED			:= $(shell tput -Txterm setaf 1)
GREEN		:= $(shell tput -Txterm setaf 2)
YELLOW		:= $(shell tput -Txterm setaf 3)
LIGHTPURPLE	:= $(shell tput -Txterm setaf 4)
PURPLE		:= $(shell tput -Txterm setaf 5)
BLUE		:= $(shell tput -Txterm setaf 6)
WHITE		:= $(shell tput -Txterm setaf 7)
BOLD		:= $(shell tput -Txterm bold)
END			:= $(shell tput -Txterm sgr0)
NAMEC		= ${BLUE}${BOLD}$(NAME)${END}

SRC			= main.cpp

OBJ			= $(SRC:.cpp=.o)

all:		$(NAME)

%.o: %.cpp
			@printf "${PURPLE}${BOLD}Start compile ... %-30.30s\r${END}" $@
			$(CC) $(CFLAGS) -c $<

$(NAME): 	$(OBJ)
			@echo "\n"
			$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
			@echo "${GREEN}The $(NAMEC) ${GREEN}has been build !${END}"

clean:
			$(RM) $(OBJ)
			@echo "${LIGHTPURPLE}Cleaning ...${END}\n"

fclean:		clean
			$(RM) $(NAME)
			@echo "${LIGHTPURPLE}Delete $(NAMEC)${LIGHTPURPLE} ...${END}\n"

re:			fclean all

.PHONY:		all test clean fclean re
