#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
/**
 *add_node - adds a new node at the beginning of a list_t list
 *@head:pointer to the first node
 *@str:string to add to new node
 *Return:address of new element,NULL otherwise
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
