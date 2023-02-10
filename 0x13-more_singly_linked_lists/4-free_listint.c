#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: holds the first elements
 *
 */

void free_listint(listint_t *head)

{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(head);
}
