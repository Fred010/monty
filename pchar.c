#include "monty.h"

/**
 * pchar_func - output the char at the top of stack,
 * followed by a new line
 * @head: stack head
 * @count: line_number
 *
 * Return: no return
 */

void pchar_func(stack_t **head, unsigned int count)
{
	stack_t *h;

	h = *head;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", count);
		fclose(operand.file);
		free(operand.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", count);
		fclose(operand.file);
		free(operand.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	printf("%c\n", h->n);
}
