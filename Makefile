# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/03 11:42:29 by ferncarv          #+#    #+#              #
#    Updated: 2023/01/11 14:55:59 by ferncarv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fractol 
  
  
SRCS = fractol.c fractol_line.c put_pixel.c mandelbrot.c julia.c check_error.c ft_atoi.c ft_strcmp.c handle.c
  
  
OBJS = ${SRCS:.c=.o} 
  
  
CC	= cc 
  
  
RM	= rm -f 
  
  
CFLAGS = -Wall -Wextra -Werror 
  
  
.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ./minilib 
  
  
$(NAME):	${OBJS} 
				make -C ./minilib
				$(CC) $(OBJS) -L ./minilib -lmlx -framework OpenGL -framework AppKit -o $(NAME) 
  
  
all:	${NAME} 
  
  
clean:
		${RM} ${OBJS}
		make clean -C ./minilib 
  
  
fclean:		clean 
			${RM} ${NAME} 
  
  
re: fclean all 
  
  
  
.PHONY: all clean fclean re
