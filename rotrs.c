#include "monty.h"
/**
 * rotrs - Rotates the stack to the bottom.
 *
 * This function rotates the stack, moving the bottom element to the top.
 *
 * @head: A pointer to the head of the stack.
 * @counter: The line number in the code where this operation is executed.
 *
 * Return: This function does not return any value.
 */
void rotrs(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *copy;

	copy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = copy;
	(*head) = copy;
}
