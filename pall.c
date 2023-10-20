#include "monty.h"

/**
 * pall_func - output the stack
 * @head: stack head
 * @count: unused
 * Return: no return
 */

void pall_func(stack_t **head, unsigned int count)
{
	stack_t *h;
	(void) count;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
