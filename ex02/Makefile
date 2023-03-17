# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/25 22:49:55 by adiouane          #+#    #+#              #
#    Updated: 2023/03/17 19:16:25 by adiouane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := a.out

SRC := main.cpp\

GCC := c++ -Werror -Wextra -Wall  -std=c++98 

all : $(NAME)

$(NAME) : $(SRC)
		@$(GCC) $(SRC) -o $(NAME)

clean :
	@echo "Cleaning up..."

fclean :
	@rm -f $(NAME)

re : fclean all
