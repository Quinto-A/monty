#include "monty.h"

/**
 * f_pall - print all elements of the stack
 * @head: head of the stack
 * @counter: line count
 * Return: nothing
 */

void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void) counter;

	h = *head;

	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
