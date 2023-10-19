#include "monty.h"
/**
 * subs - Subtracts the top element from the second element on the stack.
 *
 * This function subtracts the top element from the second element
 * stores the result at the top of the stack.
 *
 * @head: A pointer to the head of the stack.
 * @counter: The line number in the code where this operation is executed.
 *
 * Return: This function does not return any value.
 */
void subs(stack_t **head, unsigned int counter)
{
	stack_t *aux;
	int sus, nodes;

	aux = *head;
	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = *head;
	sus = aux->next->n - aux->n;
	aux->next->n = sus;
	*head = aux->next;
	free(aux);
}
