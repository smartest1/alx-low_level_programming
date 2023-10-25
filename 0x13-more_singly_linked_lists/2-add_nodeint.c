#include "lists.h"

/**
 * add_nodeint - function to add node
 * @head: head node
 * @n: input data
 *
 * Return: Always 0.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (*head);
}
