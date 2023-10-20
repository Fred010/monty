#include "monty.h"

/**
 * addqueue - add node to the tail stack
 * @n: new value
 * @head: head of the stack
 *
 * Return: no return
 */

void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *extra;

	extra = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}

	new_node->n = n;
	new_node->next = NULL;
	if (extra)
	{
		while (extra->next)
			extra = extra->next;
	}

	if (!extra)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		extra->next = new_node;
		new_node->prev = extra;
	}
}
