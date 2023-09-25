#include "sort.h"

/**
 * node_swap - Swaps out two nodes if one is greater than the other
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
    if (list == NULL || *list == NULL)
        return;
    
    listint_t *prev = *list;
    listint_t *current = prev->next;
    for ( ; current != NULL; current = current->next)
    {
        int key = current->n;
        listint_t *j = current->prev;
        while (j != NULL && j->n > key)
        {
            node_swap(j, j->next);
            j = j->prev;
        }
        print_list(*list);
    }
}
