# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rvignero <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/07 09:50:58 by rvignero          #+#    #+#              #
#    Updated: 2016/11/13 17:54:00 by kmaitski         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-2

SRC = rush-2.c functions.c intcharstr.c

SRC_O = *.o 

FLAGS = -Wall -Wextra -Werror

HEADERS = -I includes/

all: $(NAME)

$(NAME):
	gcc -c $(FLAGS) $(SRC) $(HEADERS) 	
	gcc $(FLAGS) $(SRC_O) -o $(NAME)
	
clean:
	/bin/rm -f $(SRC_O)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
