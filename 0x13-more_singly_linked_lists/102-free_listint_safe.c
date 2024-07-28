#include "lists.h"
#include <stdio.h>

/**
 * free_listint_safe - Frees a listint_t list safely (handles loops).
 * @h: A pointer to the address of the head of the listint_t list.
 *
 * Return: The size of the list that was free’d.
 */
size_t free_listint_safe(listint_t **h)
{
    listint_t *slow, *fast, *prev;
    size_t count = 0;

    if (h == NULL || *h == NULL)
        return (0);

    slow = *h;
    fast = *h;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) /* Cycle detected */
        {
            slow = *h;
            while (slow != fast)
            {
                prev = slow;
                slow = slow->next;
                fast = fast->next;
            }
            prev->next = NULL;
            break;
        }
    }

    while (*h != NULL)
    {
        slow = (*h)->next;
        free(*h);
        *h = slow;
        count++;
    }

    *h = NULL;

    return (count);
}

