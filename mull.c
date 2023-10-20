#include "monty.h"
/**
 * mull - Multiplies the top two elements of the stack.
 *
 * This function multiplies the top element of the stack of second element
 * from the top and stores the result back in the top element. The second
 * element from the top is removed.
 *
 * @head: A pointer to the head of the stack.
 * @counter: The line number where this operation is executed.
 *
 * Return: This function does not return a value.
 */
void mull(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mull, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->next->n * h->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
