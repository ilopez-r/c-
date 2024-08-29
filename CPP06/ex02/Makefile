NAME = a

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

SRCS = main.cpp\
		Base.cpp \

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