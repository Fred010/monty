#include "monty.h"

/**
 * mul_func - function that finds product of top two elements of the stack.
 * @head: stack head
 * @count: line number
 *
 * Return: no return
 */

void mul_func(stack_t **head, unsigned int count)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", count);
		fclose(operand.file);
		free(operand.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	h = *head;
	extra = h->next->n * h->n;
	h->next->n = extra;
	*head = h->next;
	free(h);
}
