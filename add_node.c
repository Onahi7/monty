#include "monty.h"
/**
 * add_node - Adds a new node to the head of the stack.
 *
 * This function creates a new node with the given value and adds it to the
 * top (head) of the stack.
 *
 * @head: A pointer to the head of the stack.
 * @n: The value to be added to the new node.
 *
 * Return: This function does not return any value.
 */
void add_node(stack_t **head, int n)
{

	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (aux)
		aux->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
