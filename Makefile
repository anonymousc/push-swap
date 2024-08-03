NAME = push_swap

CC = cc

CFLAGS =  -Wall -Wextra -Werror

SRCS =  src/utils/helper_functions_3.c src/utils/helper_functions_2.c \
	src/utils/arg_pars.c src/utils/fillers_sortedarr.c src/utils/helper_functions.c src/utils/linked_lists.c \
	src/main.c

OBJS = $(SRCS:.c=.o)



all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) -g3 $(OBJS) $(CFLAGS) -o $@ 

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean  all 

.SECONDARY : $(OBJS)