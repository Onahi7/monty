#include "monty.h"
/**
 * pstrs - Prints the string starting at the top of the stack.
 *
 * This function treats the top of the stack as a character and continues
 * printing characters until it reaches a 0 (NULL) or a non-printable char
 * It stops when the stack is empty, or an error occurs.
 *
 * @head: A pointer to the head of the stack.
 * @counter: The line number in the code where this operation is executed.
 *
 * Return: This function does not return any value.
 */
void pstrs(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
