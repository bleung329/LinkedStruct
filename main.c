#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main()
{
	node* blah = (node*) calloc(1,sizeof(node));
	blah->data = 3;
	printf("%d\n", blah->data);
	printf("%p\n", blah->next);
	print_list(blah);
	free(blah);
	return 0;
}