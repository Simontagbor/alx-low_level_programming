/*
 * file: 1-dlistint_len.c
 * Auth: Simon Tagbor <simontagbor360@gmail.com>
 */

#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list.
 * @h: The head of the dlistint_t list.
 *
 * Return: The number of elements in a linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
