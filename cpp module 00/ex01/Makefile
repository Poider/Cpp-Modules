NAME = phonebook

SRCS = Phonebook.cpp Contact.cpp main.cpp

OBJS = ${SRCS:.c=.o}

CC = c++

RM = rm -f

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g


all : $(NAME)

$(NAME) : $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean :
	$(RM) $(NAME)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re bonus