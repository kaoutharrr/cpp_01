# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/22 21:01:09 by kkouaz            #+#    #+#              #
#    Updated: 2023/10/22 22:53:47 by kkouaz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Ex05
CC = c++
CFLAGS = -WALL -Wextra -Werror -std=c++98
RM = rm -rf
SRC = Harl.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) (CFLAGS) $(SRC) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all
