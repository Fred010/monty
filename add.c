#include "monty.h"

/**
 * add_func - adds the top two elements of the stack.
 * @head: stack head
 * @count: line number
 * Return: no return
 */

void add_func(stack_t **head, unsigned int count)
{
	stack_t *h;
	int len = 0, extra;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}

	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", count);
		fclose(operand.file);
		free(operand.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	h = *head;
	extra = h->n + h->next->n;
	h->next->n = extra;
	*head = h->next;
	free(h);
}
