#include <stdio.h>
#include "lists.h"
/**
 * listint_len - function declaration
 * @h:function argument
 *
 * Description:function that returns the number of elements in a linked list
 * Return:number of elements in list
 */

size_t listint_len(const listint_t *h)
{
size_t num = 0;
while (h != NULL)
	{
	num += _putchar(h->n + '0');
	h = h->next;
	}
return (num);
}
