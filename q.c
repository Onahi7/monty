#include "monty.h"
/**
 * q - prints integers  the top
 * @head:  pointer to the stack head
 * @counter: counts the line_number
 * Return: no return
*/
void q(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * add_queue - adds a new  node to the tail stack
 * @n:  adds a new_value
 * @head:  a pointer to the head of the stack
 * Return: returns void or nothing
*/
void add_queue(stack_t **head, int n)
{
	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}
