CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:.cpp=.o)

NAME = fixed

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.Phony : all clean fclean re