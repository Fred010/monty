#include "monty.h"

/**
 * pstr_func - shows the string starting at the top of the stack,
 * followed by a new
 * @head: stack head
 * @count: line number
 * Return: no return
 */

void pstr_func(stack_t **head, unsigned int count)
{
	stack_t *h;
	(void) count;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}

		printf("%c", h->n);
		h = h->next;
	}

	printf("\n");
}
