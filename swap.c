#include "monty.h"

 /**
  * f_swap - swap the top two elements of the stack
  * @head: head stack
  * @counter: line_number
  * Return: nothing
  */

void f_swap(stack_t **head, unsigned int counter)
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
	fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
	fclose(bus.file);
	free(bus.content);
	free_stack(*head);
	exit(EXIT_FAILURE);
	}
	h = *head;
	ptr = h->n;
	h->n = h->next->n;
	h->next->n = ptr;
}
