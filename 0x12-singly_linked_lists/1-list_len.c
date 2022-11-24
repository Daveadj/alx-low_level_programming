#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *list_len - returns no. of elements in a list
 *@h:list
 *Return:no. of elements
 */
size_t list_len(const list_t *h)
{
	const list_t *temp;
	unsigned int counter = 0;

	temp = h;
	while (temp)
	{
		counter++;
		temp = temp->next;
	}
	return (counter);
}
