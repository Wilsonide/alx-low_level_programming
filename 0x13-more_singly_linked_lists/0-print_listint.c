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
h = malloc(sizeof(listint));
listint_t *temp = h;
size_t count = 0;
if (temp == NULL)
	printf("list is empty");
while (temp != NULL)
	{
	printf("%d\n", temp->n);
	temp = temp->next;
	count++;
	}
return (count);
}
