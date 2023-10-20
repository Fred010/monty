#include "monty.h"

/**
 * pint_func - output the top of the stack
 * @head: stack head
 * @count: counts line number
 * Return: no return
 */

void pint_func(stack_t **head, unsigned int count)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", count);
		fclose(operand.file);
		free(operand.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*head)->n);
}
