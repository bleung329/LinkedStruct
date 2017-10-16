#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node* next;
} node;

void print_list(struct node* startpt)
{
	printf("--START--\n");
	struct node* temp;
	temp = startpt;
	printf("%d\n", temp->data);
	while (temp->next)
	{
		temp = temp->next;
		//printf("c machine Broke\n");
		printf("%d\n", temp->data);
	}
	printf("---END---\n");
}

struct node * insert_front(struct node* pter, int num)
{
	struct node* newthing = (struct node*)calloc(1,sizeof(node));
	newthing->data = num;
	newthing->next = pter;
	return newthing;
}

struct node * free_list(struct node* pter)
{
	struct node* temp;
	while (temp->next)
	{
		temp = temp->next;
		free (temp);
	}
	return NULL;
}
