# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/22 11:12:48 by ishaaq            #+#    #+#              #
#    Updated: 2026/02/22 11:12:49 by ishaaq           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -Iinc/
SRCS = main.cpp Dog.cpp Cat.cpp Animal.cpp WrongCat.cpp WrongAnimal.cpp
NAME = animal
ODIR = objs/
SDIR = srcs/

FULL_SRCS = $(addprefix $(SDIR), $(SRCS))
OBJS = $(patsubst $(SDIR)%.cpp,$(ODIR)%.o,$(FULL_SRCS))

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

.PHONY: all clean fclean re 
