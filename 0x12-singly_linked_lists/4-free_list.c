#include "lists.h"
/**
 *free_list - eliminate memory leaks while using lists
 *@head: pointer to the the list
  *Return: Nothing
 */
void free_list(list_t *head)
{
	int i = 0;
	void *tmp;

	for (i = 0; head != NULL; i++)
	{
		tmp = head;
		free(head->str);
		head = head->next;
		free(tmp);
	}
}
