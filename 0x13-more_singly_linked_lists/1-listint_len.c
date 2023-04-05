#include "lists.h"
#include <stdio.h>

/**
* listint_len - Function that returns number of elements in a linked list.
* @h : point to node
* Return: Number of elements
*/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
