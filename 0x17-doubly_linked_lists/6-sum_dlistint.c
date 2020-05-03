#include "lists.h"

/**
 * sum_dlistint - adds all numbers in the sll
 * @head: Head pointer
 * Return: sum of all integers of the sll.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	int count = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum = head->n + sum;
		head = head->next;
		count++;
	}
	if (count == 0)
		return (0);
	return (sum);
}
