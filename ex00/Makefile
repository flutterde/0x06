
NAME=app
CPP=c++
CPPFLAGS=-Wall -Wextra -Werror -std=c++98 -g -fsanitize=address
SRCS=main.cpp ScalarConverter.cpp helpers.cpp

HEADERS=ScalarConverter.hpp
OBJS=$(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re