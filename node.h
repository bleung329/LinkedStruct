#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int data;
	struct node* next;
} node;

void print_list(node* startpt)
{
	node* temp;
	temp = startpt;
	printf("%d\n", temp->data);
	while (temp->next)
	{
		temp = temp->next;
		//printf("c machine Broke\n");
		printf("%d\n", temp->data);
	}
}

struct node * insert_front(struct node* pter, int num)
{
	node* newthing = (node*)calloc(1,sizeof(node));
	newthing->data = num;
	newthing->next = pter;
	pter = newthing;
	return newthing;
}

struct node * free_list(struct node* pter)
{
	node* temp;
	temp = pter;
	while (temp->next)
	{
		temp = temp->next;
		free (temp);
	}
	return NULL;
}
