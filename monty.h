#ifndef MONTY_H
#define MONTY_H

#define  _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - sets doubly linked list stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */

typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct operand_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stack< -> queue
 * Description: carries values through the program
 */

typedef struct operand_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
} operand_t;

extern operand_t operand;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */

typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char *clean_line(char *content);
void push_func(stack_t **head, unsigned int num);
void pall_func(stack_t **head, unsigned int num);
void pint_func(stack_t **head, unsigned int num);
int execute(char *content, stack_t **head, unsigned int count, FILE *file);
void free_stack(stack_t *head);
void pop_func(stack_t **head, unsigned int count);
void swap_func(stack_t **head, unsigned int count);
void add_func(stack_t **head, unsigned int count);
void nop_func(stack_t **head, unsigned int count);
void sub_func(stack_t **head, unsigned int count);
void div_func(stack_t **head, unsigned int count);
void mul_func(stack_t **head, unsigned int count);
void mod_func(stack_t **head, unsigned int count);
void pchar_func(stack_t **head, unsigned int count);
void pstr_func(stack_t **head, unsigned int count);
void rotl_func(stack_t **head, unsigned int count);
void rotr_func(stack_t **head, __attribute__((unused)) unsigned int count);
void addnode(stack_t **head, int n);
void addqueue(stack_t **head, int n);
void queue_func(stack_t **head, unsigned int count);
void stack_func(stack_t **head, unsigned int count);


#endif
