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
	while (temp->data)
	{
		temp = temp->next;
		printf("it broke\n");
		printf("%d\n", temp->data);
	}
}

struct node * insert_front(struct node* pter, int num)
{

}

struct node * free_list(struct node* pter)
{

}
