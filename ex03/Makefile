CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -Iinc/
SRCS = AMateria.cpp Ice.cpp Cure.cpp main.cpp Character.cpp MateriaSource.cpp
NAME = materia

SDIR = srcs/
ODIR = objs/

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
