#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_node_end - Adds a new node at the end of a list.
  * @head: The original linked list.
  * @str: The string to add to the node.
  *
  * Return: The address of the new list or NULL if it failed.
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newList;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	newList = malloc(sizeof(list_t));
	if (!newList)
		return (NULL);

	newList->str = strdup(str);
	newList->len = len;
	newList->next = NULL;

	if (*head == NULL)
	{
		*head = newListe;
		return (newList);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = newList;

	return (newList);
}
