CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -Iinc/
SRCS = main.cpp Dog.cpp Cat.cpp Animal.cpp Brain.cpp
NAME = animal

ODIR = objs/
SDIR = srcs/

FULL_SRCS = $(addprefix $(SDIR), $(SRCS))

OBJS = $(patsubst $(SDIR)%.cpp, $(ODIR)%.o, $(FULL_SRCS))

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

$(ODIR)%.o: $(SDIR)%.cpp | $(ODIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(ODIR):
	@mkdir -p $(ODIR)

re: fclean all

clean:
	rm -rf $(ODIR)

fclean: clean
	rm -rf $(NAME)

