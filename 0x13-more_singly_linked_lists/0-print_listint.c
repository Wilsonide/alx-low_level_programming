#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/*
 * print_listint - name of function
 * @h: pointer to the list elements
 * Return:number of element in list
 */
size_t print_listint(const listint_t *h)
{
size_t count = 0;
while (h != NULL)
	{
	printf("%d\n", h->n);
	h = h->next;
	count++;
	}
return (count);
}
