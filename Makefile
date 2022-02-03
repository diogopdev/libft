# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jguerrei <jguerrei@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/02 15:31:24 by jguerrei          #+#    #+#              #
#    Updated: 2022/02/02 15:34:15 by jguerrei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ./ft_isalpha.c ./ft_isdigit.c ./ft_isascii.c ./ft_isalnum.c ./ft_isprint.c ./ft_atoi.c ./ft_memcpy.c ./ft_bzero.c ./ft_strlen.c ./ft_memset.c ./ft_strchr.c ./ft_strlcat.c ./ft_strlcpy.c ./ft_tolower.c ./ft_toupper.c ./ft_strncmp.c ./ft_strnstr.c ./ft_strrchr.c ./ft_memcmp.c ./ft_memchr.c ./ft_memmove.c ./ft_calloc.c ./ft_strdup.c ./ft_substr.c ./ft_strjoin.c ./ft_strtrim.c ./ft_split.c ./ft_itoa.c ./ft_strmapi.c ./ft_striteri.c ./ft_putchar_fd.c ./ft_putstr_fd.c ./ft_putendl_fd.c ./ft_putnbr_fd.c

BONUS = ./ft_lstnew.c ./ft_lstadd_front.c  ./ft_lstadd_front.c ./ft_lstsize.c ./ft_lstlast.c ./ft_lstadd_back.c ./ft_lstdelone.c ./ft_lstclear.c ./ft_lstiter.c ./ft_lstmap.c

OBJ = ${SRC:.c=.o}

OBJB = ${BONUS:.c=.o}

NAME = libft.a

HEAD = includes

GCC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

AR = ar rc

RANLIB = ranlib

.c.o:
		${GCC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${HEAD}

${NAME}: ${OBJ}
	${AR} ${NAME} ${OBJ}
	${RANLIB} ${NAME}

all: ${NAME}

bonus: ${OBJ} ${OBJB}
	${AR} ${NAME} ${OBJ} ${OBJB}
	${RANLIB} ${NAME}


clean: 
	${RM} ${OBJ} ${OBJB}

fclean: clean
	${RM} ${NAME}

re:	fclean all

norm:	
	norminette -R CheckForbiddenSourceHeader *.c
	norminette -R CheckDefine *.h