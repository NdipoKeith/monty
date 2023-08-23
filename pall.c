#include "monty.h"

/**
 * f_pall - print all values on `stack' starting from the top
 * @head: double pointer to head of stack
 * @counter: line number being executed from script file
 *
 * Return: void
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
