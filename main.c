/*
Brian Leung
PD 10 Systems
*/

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main()
{
	node* blah = (node*) calloc(1,sizeof(node));
	blah->data = 3;
	blah = insert_front(blah, 88);
	blah = insert_front(blah, 1231);
	//printf("%d\n", blah->data);
	//blah->next = (node*) calloc(1,sizeof(node));
//	brrt->data = 17;
	//printf("%p\n", blah->next);
//	printf("%p\n", brrt);
//	printf("%p\n", blah);
//	printf("%d\n", sizeof(node));
	print_list(blah);
	free_list(blah);
	printf("Free\n");
	free(blah);
	return 0;
}