#include "monty.h"

/**
 * rotl_func- rotates the stack to the top
 * @head: stack head
 * @count: line number
 *
 * Return: void
 */

void rotl_func(stack_t **head, __attribute__((unused)) unsigned int count)
{
	stack_t *tmp = *head, *extra;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}

	extra = (*head)->next;
	extra->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = extra;
}
