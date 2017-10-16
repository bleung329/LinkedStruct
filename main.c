/*
Brian Leung
PD 10 Systems
A Linked List
*/

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main()
{
	printf("My struct node is named blah.\n");
	struct node* blah = (struct node*) calloc(1,sizeof(node));
	blah->data = 3;
	blah = insert_front(blah, 7821);
	blah = insert_front(blah, 1218);
	blah = insert_front(blah, 1337);
	printf("I just inserted the values 3, 7821, 1218, and 1337\n");
	printf("Im gonna print them now.\n");
	print_list(blah);
	free_list(blah);
	printf("I just freed them.\n");
	return 0;
}