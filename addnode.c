#include "monty.h"

/**
 *addnode - add node to the head stack
 *@head: head of the stack
 *@n: new value
 *
 *Return: no return
 */

void addnode(stack_t **head, int n)
{
	stack_t *new_node, *extra;

	extra = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
		exit(0);
	}

	if (extra)
		extra->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
