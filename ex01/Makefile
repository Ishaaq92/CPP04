CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g
SRCS = main.cpp Dog.cpp Cat.cpp Animal.cpp Brain.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = animal

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
	@$(MAKE) clean

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

re: fclean all

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

