#include "monty.h"
/**
 * divs - Divides the top two elements of the stack.
 *
 * This function divides the second element from the top of the stack
 * element and stores the result back in the top element of the stack. The
 * second element from the top is removed.
 *
 * @head: A pointer to the head of the stack.
 * @counter: The line number in the code where this operation is executed.
 *
 * Return: This function does not return any value.
 */

void divs(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = h->next->n / h->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
