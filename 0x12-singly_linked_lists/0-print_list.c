#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_list - prints all elements of a list_t list
 *@h:list to print
 *Return:no. of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}

	return (n);
}
