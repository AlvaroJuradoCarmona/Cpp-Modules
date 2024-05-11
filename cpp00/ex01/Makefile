# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajurado- <ajurado-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/11 12:15:18 by ajurado-          #+#    #+#              #
#    Updated: 2024/05/11 12:15:19 by ajurado-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= contactList
CFLAGS		= -Wall -Wextra -Werror -std=c++98
SRCS		= PhoneBook.cpp Contact.cpp ContactList.cpp
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