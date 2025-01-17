# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/07 12:53:29 by anastruc          #+#    #+#              #
#    Updated: 2025/01/17 14:45:18 by anastruc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = DiamondTrap
COMPIL = c++
FLAGS =  -Wall -Werror -Wextra -std=c++98

PINK = \033[1;35m
BLUE = \033[1;36m
NC = \033[0m

HEADER = headers/ClapTrap.hpp \
		headers/FragTrap.hpp \

SRCS =  ClapTrap_functions.cpp \
		ClapTrap_getter.cpp \
		ClapTrap_constructors.cpp \
		ScavTrap_functions.cpp \
		ScavTrap_constructor.cpp \
		FragTrap_function.cpp \
		FragTrap_constructor.cpp \
		DiamondTrap_constructors.cpp \
		DiamondTrap_functions.cpp \
        main.cpp
		

PSRCS = $(addprefix srcs/, $(SRCS))

OBJS = $(PSRCS:srcs/%.cpp=objs/%.o);

all : $(NAME)

objs/%.o: srcs/%.cpp $(HEADER)
		@mkdir -p objs
		@$(COMPIL) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJS)
		@$(COMPIL) $(FLAGS) -o $@ $(OBJS)
		@echo "$(BLUE)\n  Prog COMPILED \n$(NC) "


clean :
	@rm -rf objs
	@echo  "$(BLUE)\n  DiamondTrap CLEANED \n$(NC)"

fclean : clean
	@rm -rf $(NAME)
	@echo  "$(BLUE)\n  DiamondTrap FULLY CLEANED \n$(NC)"

leak :
	@valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --track-fds=yes ./$(NAME)

re : fclean all

.PHONY : all clean fclean re bonus