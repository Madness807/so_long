#***** Name *****#

NAME			=		so_long

#***** Sources / Objs *****#

SRC				=		so_long.c \

OBJS			=		$(SRC:.c=.o)

MAKEFLAGS += --no-print-directory

#***** Libft *****#

LIBFT			=		./libft/libft.a
MLIBFT			=		@$(MAKE) -C libft

#***** MLX *****#

MLX				=		./mlx/libmlx.a
MMLX			=		@$(MAKE) -C mlx

#***** Couleurs *****#

GREEN			=		\033[1;32m
BLUE			=		\033[0;94m
RED				=		\033[1;31m
ENDCOLOR		=		\033[0m
BG_G			=		\033[42m

#***** Textes *****#

START			=		echo "$(GREEN)Start compilation\n$(ENDCOLOR)"
TEST			=		echo "Run test\n"
END_COMP		=		echo "$(GREEN)End compilation\n$(ENDCOLOR)"
S_OBJS			=		echo "$(RED)Suppression des objets\n$(ENDCOLOR)"
S_NAME			=		echo "$(RED)Suppression du programme\n$(ENDCOLOR)"
CHARG_LINE		=		echo "$(BG_G)    $(ENDCOLOR)\c"
BS_N			=		echo "\n"

#***** Logo *****#

MSHELL			=		echo "$(GREEN) \t     __  ______    ____  _   __________________\n\
\t    /  |/  /   |  / __ \/ | / / ____/ ___/ ___/\n\
\t   / /|_/ / /| | / / / /  |/ / __/  \__ \\__ \ \n\
\t  / /  / / ___ |/ /_/ / /|  / /___ ___/ /__/ / \n\
\t /_/  /_/_/  |_/_____/_/ |_/_____//____/____/   $(ENDCOLOR)\n"

#***** Flags *****#

CC				=		gcc
CFLAGS			=		-Wall -Wextra -Werror -g -framework OpenGL -framework AppKit
L				=		$(CFLAGS) -fsanitize=address
RM				=		rm -f

#***** Compilation *****#

all : lib start logo $(NAME)

lib:
			@$(MLIBFT)
			@$(MMLX)

start:
			@$(START)

logo :
			@$(MSHELL)	

#%.o:		%.c ./libft/libft.h ./so_long.h Makefile
#			@$(CC) $(CFLAGS) -c $< -o $@
#			@$(CHARG_LINE)

#$(NAME) :	${OBJS}
#			@$(BS_N)
#			${CC} ${CFLAGS} -o ${NAME} ${OBJS} ${LIBFT}
#			@$(END_COMP)

$(NAME) :
			$(CC) $(SRC) $(LIBFT) $(FLAGS) -o $(NAME)
			echo "TA DARONNE !\n"

l :
			@$(MLIBFT)
			@$(MMLX)
			$(CC) $(SRC) $(LIBFT) $(L) -o $(NAME)

#l :			${OBJS}
#			${MLIBFT} all
#			${CC} ${L} -o ${NAME} ${OBJS} ${MLX} ${LIBFT} 
#			@$(END_COMP)

#***** Clean *****#

clean:
			@$(S_OBJS)
			@${RM} ${OBJS}
			@${MLIBFT} clean
			@${MMLX} clean

fclean:		clean
			@$(S_NAME)
			@${RM} ${NAME}
			@${MLIBFT} fclean
			@echo "Succes cleaning"

re:			fclean all

.PHONY:		all clean fclean 
