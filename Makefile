NAME = push_swap

CC = cc

CFLAGS =  -Wall -Wextra -Werror #-fsanitize=address -g3

SRCS =  src/utils/helper_functions_3.c src/utils/helper_functions_2.c \
		src/utils/arg_pars.c src/utils/fillers_sortedarr.c src/utils/helper_functions.c \
		src/utils/linked_lists.c src/sorting/check_len_tosort.c src/sorting/algo_utils.c \
		src/moves/s_stacks.c src/moves/p_stacks.c\
		src/main.c src/moves/r_stacks.c src/moves/rrr_stacks.c src/utils/show_list.c

OBJS = $(SRCS:.c=.o)


f : all clean

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) -g3 $(OBJS) $(CFLAGS) -o $@ 

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean  all 


.SECONDARY : $(OBJS)