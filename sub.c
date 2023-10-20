#include "monty.h"

/**
 * sub_func- function for subtration
 * @head: stack head
 * @count: line number
 * Return: no return
 */

void sub_func(stack_t **head, unsigned int count)
{
	stack_t *extra;
	int space, nodes;

	extra = *head;
	for (nodes = 0; extra != NULL; nodes++)
		extra = extra->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", count);
		fclose(operand.file);
		free(operand.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	extra = *head;
	space = extra->next->n - extra->n;
	extra->next->n = space;
	*head = extra->next;
	free(extra);
}
