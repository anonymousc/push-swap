#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdbool.h>
# include <string.h>

typedef struct s_list{

	int *data;
	struct s_list *next;
} t_list;


# define MAX_INT 2147483647
# define MIN_INT -2147483648
#endif