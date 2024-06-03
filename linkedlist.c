#include <stdlib.h>
#include <stdio.h>

typedef struct  list{
	void *data;
	struct list *next;
} list;

list *new(char *test)
{
	list *data;
	data = malloc(sizeof(list));
	data->data = test;
	data->next = data->data;
	int i = 0;
	while (!data)
	{
		data = data->next;
		printf("%p\n", data->data);
		i++;
	}
	i++;
	printf("%d\n",i);
	// data->next = NULL;
	// free(data);
	// free(test);
	return data;
}
int main()
{
	list *t = new("test");
	new("adam");
	printf("%s",(char *)t->data);
	free(t);
}