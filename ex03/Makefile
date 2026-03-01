CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -Iinc/
SRCS = AMateria.cpp Ice.cpp Cure.cpp main.cpp Character.cpp MateriaSource.cpp
NAME = materia

SDIR = srcs/
ODIR = objs/

FULL_SRCS = $(addprefix $(SDIR), $(SRCS))
OBJS = $(patsubst $(SDIR)%.cpp, $(ODIR)%.o, $(FULL_SRCS))

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

$(OBJS): | $(ODIR)

$(ODIR)%.o: $(SDIR)%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(ODIR):
	@mkdir -p $(ODIR)

re: fclean all

clean:
	rm -rf $(ODIR)

fclean: clean
	rm -rf $(NAME)
