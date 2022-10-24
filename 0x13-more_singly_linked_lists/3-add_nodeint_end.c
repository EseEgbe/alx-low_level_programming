#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a linked list.
 * @head: pointer to the head of the list.
 * @n: number to be used as content.
 *
 * Return: address of the newly added node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *cursor = *head;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (cursor->next)
		cursor = cursor->next;
	cursor->next = new;

	return (new);
}
