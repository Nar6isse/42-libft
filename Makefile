# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebouchet <ebouchet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/13 16:49:06 by ebouchet          #+#    #+#              #
#    Updated: 2023/11/13 16:49:16 by ebouchet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang

CFLAGS = -Wall -Wextra -Werror -g

HEADERS = .

SRCS =	ft_atoi.c ft_strdup.c ft_calloc.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memcmp.c ft_memmove.c ft_strchr.c \
	ft_strlcpy.c ft_strncmp.c ft_strrchr.c ft_toupper.c ft_bzero.c ft_isalpha.c ft_isdigit.c ft_memchr.c ft_memcpy.c \
	ft_memset.c ft_strlcat.c ft_strlen.c ft_strnstr.c ft_tolower.c ft_substr.c ft_strtrim.c ft_strmapi.c ft_strjoin.c \
	ft_striteri.c ft_split.c ft_itoa.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_putchar_fd.c

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
	ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

NAME = libft.a

OBJS = $(SRCS:.c=.o)

OBJ_BONUS = $(BONUS:.c=.o)

all: $(NAME)

bonus: $(OBJS) $(OBJ_BONUS)
	ar rcs $(NAME) $(OBJS) $(OBJ_BONUS)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	
clean:
	rm -f $(OBJS) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re