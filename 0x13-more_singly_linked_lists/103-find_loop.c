#include "lists.h"
/**
 * find_listint_loop - finds the loop in a list
 * @head: pointer to first node
 * Return: address of looping node or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *min, *got;

	if (!head)
		return (NULL);
	min = got = head;
	while (got->next && got->next->next)
	{
		got = got->next->next;
		min = min->next;
		if (got == min)
		{
			min = got;
			while (min != got)
			{
				min = min->next;
				got = got->next;
			}
			return (got);
		}
	}
	return (NULL);
}
