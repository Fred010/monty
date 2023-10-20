#include "monty.h"

/**
 * rotr_func- rotates the stack to the bottom
 * @head: stack head
 * @count: line number
 *
 * Return: no return
 */

void rotr_func(stack_t **head, __attribute__((unused)) unsigned int count)
{
	stack_t *duplicate;

	duplicate = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}

	while (duplicate->next)
	{
		duplicate = duplicate->next;
	}

	duplicate->next = *head;
	duplicate->prev->next = NULL;
	duplicate->prev = NULL;
	(*head)->prev = duplicate;
	(*head) = duplicate;
}
