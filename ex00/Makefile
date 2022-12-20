SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)

CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = megaphone

all : $(NAME)

$(NAME) : $(OBJS)
	c++ $(CFLAGS) -o $(NAME) $(OBJS)

%.o : %.cpp
	c++ $(CFLAGS) -c -o $@ $<

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : clean fclean re all bonus