#include "monty.h"

/**
 * f_add - add top two elements of the stack
 * @head: stack head
 * @counter: line number
 * Return: nothing
 */

void f_add(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, ptr;

	h = *head;

	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: cant't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	ptr = h->n + h->next->n;
	h->next->n = ptr;
	*head = h->next;
	free(h);
}
