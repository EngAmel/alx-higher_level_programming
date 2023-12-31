#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * *insert_node - function add node
 * @head:header
 * @number:value
 *
 * Return: pointer.
 **/

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new, *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = number;
	new->next = NULL;
	if (!temp|| new->n < temp->n)
	{
		new->next = temp;
		return (*head = new);
	}
	while (temp)
	{
		if (temp->next == NULL || new->n < temp->next->n)
		{
			new->next = temp->next;
			temp->next = new;
			return (temp);
		}
		temp = temp->next;
	}
	return (NULL);


}
