#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - Doubly linked list node for a stack (or queue)
 * @n: Integer value stored in the node
 * @prev: Pointer to the previous element
 * @next: Pointer to the next element
 *
 * Description: Node structure for a doubly linked list used in stack and queue
 * operations for the 0x19 project.
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct bus_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;
extern bus_t bus;
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
char  *clean_line(char *content);
void push(stack_t **head, unsigned int number);
void pall(stack_t **head, unsigned int number);
void pints(stack_t **head, unsigned int number);
int exec(char *content, stack_t **head, unsigned int counter, FILE *file);
void free_stack(stack_t *head);
void pops(stack_t **head, unsigned int counter);
void swaps(stack_t **head, unsigned int counter);
void adds(stack_t **head, unsigned int counter);
void nops(stack_t **head, unsigned int counter);
void subs(stack_t **head, unsigned int counter);
void divs(stack_t **head, unsigned int counter);
void mull(stack_t **head, unsigned int counter);
void mods(stack_t **head, unsigned int counter);
void pchar(stack_t **head, unsigned int counter);
void pstrs(stack_t **head, unsigned int counter);
void rotls(stack_t **head, unsigned int counter);
void rotrs(stack_t **head, __attribute__((unused)) unsigned int counter);
void add_node(stack_t **head, int n);
void add_queue(stack_t **head, int n);
void q(stack_t **head, unsigned int counter);
void stacks(stack_t **head, unsigned int counter);
#endif
