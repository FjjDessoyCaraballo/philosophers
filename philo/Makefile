# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fdessoy- <fdessoy-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/07 10:09:30 by fdessoy-          #+#    #+#              #
#    Updated: 2024/05/07 15:25:23 by fdessoy-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= philo
CFLAGS	:= -pthread -fsanitize=thread -Wextra -Wall -Werror -Wunreachable-code -Ofast 
LDFLAGS := -pthread -fsanitize=thread
SRCS	:= main.c parsing.c philosophers.c utils.c utils2.c initialize.c
OBJS	:= ${SRCS:.c=.o} 
all: $(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) -o $@ -c $< 

$(NAME): $(OBJS) 
	@$(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: clean fclean all

.PHONY: all, clean, fclean, re 