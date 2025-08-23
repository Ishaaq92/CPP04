CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = AMateria.cpp Ice.cpp Cure.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = materia

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
