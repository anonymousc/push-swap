NAME = push_swap

# CFLAGS = -Wall -Wextra -Werror 

SRCS =  src/helper_functions_3.c src/helper_functions_2.c \
	src/arg_pars.c src/fillers_sortedarr.c src/helper_functions.c src/linked_lists.c \
	main.c 

OBJS = $(SRCS:.c=.o)

all : $(NAME)
# 
$(NAME) : $(OBJS)
	cc $(OBJS) -o $@ 

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean  all 

.SECONDARY : $(OBJS)