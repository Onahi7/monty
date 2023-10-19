#include "monty.h"
/**
 * pints - Prints the value at the top of the stack.
 *
 * This function prints the value at the top of the stack, without modifying
 *
 * @head: A pointer to the head of the stack.
 * @counter: The line number in the code where this operation is executed.
 *
 * Return: This function does not return any value.
 */

void pints(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
