#include "monty.h"

/**
 * _sfree - free allocated memory
 * @head: argument to free
 */
void _sfree(stack_t *head)
{
	stack_t *tmp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
