#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * 
 * 
 */

size_t print_list(const list_t *h)
{
	if (h->str == NULL)
	{
		printf("[0] (nil)");
	}

	return(h->len);
}
