#include "monty.h"

/**
 * push_func - add node to the stack
 * @head: stack head
 * @count: line_number
 * Return: no return
 */

void push_func(stack_t **head, unsigned int count)
{
	int n, m = 0, flag = 0;

	if (operand.arg)
	{
		if (operand.arg[0] == '-')
			m++;
		for (; operand.arg[m] != '\0'; m++)
		{
			if (operand.arg[m] > 57 || operand.arg[m] < 48)
				flag = 1;
		}

		if (flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", count);
			fclose(operand.file);
			free(operand.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", count);
		fclose(operand.file);
		free(operand.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	n = atoi(operand.arg);
	if (operand.lifi == 0)
		addnode(head, n);
	else
		addqueue(head, n);
}
