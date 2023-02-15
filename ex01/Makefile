NAME = Form

SRC = main.cpp Bureaucrat.cpp Form.cpp
INC = Bureaucrat.hpp Form.hpp


CC = c++
FLAGS = -Wall -Wextra -Werror
RM = rm -rf

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)


%.o : %.cpp $(INC)
	$(CC) $(FLAGS) -c $< -o $@

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all