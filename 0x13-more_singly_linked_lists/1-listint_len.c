#include "lists.h"
/**
 * listint_len - Entry point
 * @h:
 * linked list of type lisint_t to travrse
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
