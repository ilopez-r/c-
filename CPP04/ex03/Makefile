NAME = a.out

CC = clang++

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

SRCS = src/AMateria.cpp \
		src/Character.cpp \
		src/Cure.cpp \
		src/Ice.cpp \
		src/MateriaSource.cpp \
		src/main.cpp

OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	@ $(CC) $(FLAGS) $(OBJS) -o $(NAME)

$(OBJS):    ./%.o : ./%.cpp
	@ $(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

clean:
	@ $(RM) $(OBJS)

fclean:
	@ $(RM) $(NAME) $(OBJS)

re : fclean all

.PHONY : all re fclean clean