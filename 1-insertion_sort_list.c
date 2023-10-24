#include "sort.h"

/**
* insertion_sort_list - Sorts a doubly linked list using
* @list: Pointer to the head of the list
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *current = (*list)->next;
	listint_t *tempnext, *tempprev;

	while (current)
	{
		tempnext = current->next;
		tempprev = current->prev;

		while (tempprev && current->n < tempprev->n)
		{
			tempprev->next = current->next;
			current->prev = tempprev->prev;
			if (current->next)
				current->next->prev = tempprev;
			if (tempprev->prev)
				tempprev->prev->next = current;
			else
				*list = current;
			current->next = tempprev;
			tempprev->prev = current;
			tempprev = current->prev;

			print_list(*list);
		}

		current = tempnext;
	}
}
