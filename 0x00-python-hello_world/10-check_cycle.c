#include "lists.h"
#include <stdio.h>
/**
 * check_cycle - Checks for cycles in singly linked lists
 *
 * @list: The list to be checked
 *
 * Return: 0 if no cycles and 1 if there is a cycle
 */

int check_cycle(listint_t *list)
{
	listint_t *slower_scanner = list, *faster_scanner = list;
	int found = 0;

	while ((faster_scanner && slower_scanner) && faster_scanner->next)
	{
		slower_scanner = slower_scanner->next;
		
		if (faster_scanner->next || faster_scanner->next->next)
			faster_scanner = faster_scanner->next->next;
		else
			break;

		if (slower_scanner == faster_scanner)
		{
			found = 1;
			break;
		}
	}

	return (found);
}


