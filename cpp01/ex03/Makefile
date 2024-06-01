NAME 		= violence
CFLAGS		= -Wall -Wextra -Werror -std=c++98
SRCS		= HumanA.cpp HumanB.cpp Weapon.cpp main.cpp
OBJS		= $(SRCS:.cpp=.o)
RM			= rm -rf

all: $(NAME)

%.o: %.cpp
	c++ $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	c++ $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:		fclean all

.PHONY:	all clean fclean re