# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajurado- <ajurado-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/11 11:30:03 by ajurado-          #+#    #+#              #
#    Updated: 2024/05/11 11:30:04 by ajurado-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= megaphone
CFLAGS		= -Wall -Wextra -Werror -std=c++98
SRCS		= megaphone.cpp
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