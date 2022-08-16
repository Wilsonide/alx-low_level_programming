#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint - function declaration
 * @head: pointer argument
 * @n: int stored value
 *
 * Description:function that adds a new node at the beginning of a list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(size of(listint_t));
if (new == NULL)
	return (NULL);
else 
	{
	new->n = n;
	new->next = *head;
	*head = new;
	}
return (new);
}
