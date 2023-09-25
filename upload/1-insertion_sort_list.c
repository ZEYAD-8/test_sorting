#include "sort.h"

/**
 * node_swap - Swaps out two nodes
 * @nx: pointer to 1st node.
 * @ns: pointer to 2nd node.
 *
 * Return: void
 */
void node_swap(listint_t *nx, listint_t *ny)
{
	if (nx->prev)
		nx->prev->next = ny;
	if (ny->next)
		ny->next->prev = nx;

	nx->next = ny->next;
	ny->prev = nx->prev;

	nx->prev = ny;
	ny->next = nx;
}

/**
 * insertion_sort_list - Sorts a doubly linked list of ints in ascending order
 * using the insertion sort algorithm.
 * @list: A doubly linked list of integers
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	listint_t *current = (*list)->next;
	listint_t *tmp;
	int correct_list, key;
	for ( ; current != NULL; current = current->next)
	{
		tmp = current->prev;
		key = current->n;
		while (tmp != NULL && tmp->n > key)
		{
			correct_list = 0;
			if (tmp->prev == NULL)
				correct_list = 1;
			node_swap(tmp, current);
			if (correct_list)
				*list = current;
			tmp = current->prev;
			print_list(*list);
		}
	}
}
