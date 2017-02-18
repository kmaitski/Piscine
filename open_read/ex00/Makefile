NAME = ft_display_file

SRC = srcs/*.c

OFILES = *.o

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra $(SRC) -Iincludes
	gcc $(OFILES) -o $(NAME)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all
