
NAME=app
CPP=c++
CPPFLAGS=-Wall -Wextra -Werror -std=c++98 -g -fsanitize=address
SRCS=main.cpp Base.cpp A.cpp B.cpp C.cpp

HEADERS=Base.hpp A.hpp B.hpp C.hpp
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