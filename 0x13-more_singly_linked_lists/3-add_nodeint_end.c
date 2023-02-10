#include "lists.h"
/**
 * *add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: hold the first elements
 * @n: number of nods
 * Return: including new nods to the end.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = n;

	if (temp == NULL)
		*head = new;
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	return (new);
}
