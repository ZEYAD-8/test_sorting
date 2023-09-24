#include "sort.h"
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
        printf("in the for loop\n");
        int key = current->n;
        listint_t *j = current->prev;
        int correct_list = 0;
        while (j != NULL && j->n > key)
        {
            printf("in the while loop\n");
            correct_list = 0;
            if (j->prev == NULL)
            {
                correct_list = 1;
            }
            printf("Before swapping, j is [%d] and j->next is [%d]\n", j->n, j->next->n);
            node_swap(j, j->next);
            printf("After  swapping, j is [%d] and j->next is [%d]\n", j->n, j->next->n);
            if (correct_list)
            {
                list = &(j);
            }
            printf("before: J is [%d]\t\t", j->n);
            j = j->prev;
            printf("after:  J is [%d]\n", j->n);
        }
        print_list(*list);
    }
            // printf("in the while loop\n");
            // printf("in the while loop: j->prev->n = %d\n", j->prev->n);
    // listint_t *current = *list;
    // listint_t *head = *list;
    // listint_t *next = current->next;
    // while (current != NULL)
    // {
    //     if (current->n > next->n)
    //     {

    //     }

    // }
}


    // for (i = 1; i < n; i++)
    // {
    //     key = arr[i];
    //     j = i - 1;
 
    //     /* Move elements of arr[0..i-1], that are
    //       greater than key, to one position ahead
    //       of their current position */
    //     while (j >= 0 && arr[j] > key) {
    //         arr[j + 1] = arr[j];
    //         j = j - 1;
    //     }
    //     arr[j + 1] = key;
    // }
