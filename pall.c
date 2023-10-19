#include "monty.h"
/**
 * f_pall - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *head_1;
	(void)counter;

	head_1 = *head;
	if (head_1 == NULL)
		return;
	while (head_1)
	{
		printf("%d\n", head_1->n);
		head_1 = head_1->next;
	}
}
