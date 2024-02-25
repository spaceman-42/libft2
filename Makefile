# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jadiaz-b <jadiaz-b@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/20 12:54:51 by jadiaz-b          #+#    #+#              #
#    Updated: 2024/02/25 19:37:04 by jadiaz-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
AR = ar
CFLAGS = -Wall -Wextra -Werror
ARFLAGS = -rcs

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	  ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
	  ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
	  ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
	  ft_strdup.c ft_calloc.c \
	  ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
	  ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \

SRC_B = ft_lstnew_bonus.c ft_lstadd_front_bouns.c \

# ft_lstsize_bonus.c ft_lstlast_bonus.c #
# ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c # 
# ft_lstiter_bonus.c ft_lstmap_bonus.c  #

OBJ = $(SRC:.c=.o)

OBJ_B = $(SRC_B:.c=.o)

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)

clean:
	rm -f $(OBJ) $(OBJ_B)

fclean: clean
	rm -f $(NAME)

all: $(NAME)

bonus: $(OBJ_B)
	@$(AR) $(ARFLAGS) $(NAME) $(OBJ_B)


re: fclean all

.PHONY: clean fclean re
