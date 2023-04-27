#include "lists.h"
/**
 * list_len - A function that returns then number of elements in a list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t nii_armah;

	nii_armah = 0;
	while (h != NULL)
	{
		h = h->next;
		nii_armah++;
	}
	return (nii_armah);
}
