#include "sort.h"

/**
 * swap - Swap function
 * @xp: pointer to address of x
 * @yp: pointer to address of y
 * Return: NULL
*/

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

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
    if(ny->next)
        ny->next->prev = nx;

    nx->next = ny->next;
    ny->prev = nx->prev;
    nx->prev = y;
    ny->next = x;

}