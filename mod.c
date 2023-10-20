#include "monty.h"

/**
 * mod_func - finds modulus of the second top element of the stack
 * @head: stack head
 * @count: line number
 *
 * Return: no return
 */

void mod_func(stack_t **head, unsigned int count)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", count);
		fclose(operand.file);
		free(operand.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", count);
		fclose(operand.file);
		free(operand.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	extra = h->next->n % h->n;
	h->next->n = extra;
	*head = h->next;
	free(h);
}
