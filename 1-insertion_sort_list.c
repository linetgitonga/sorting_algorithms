#include "sort.h"

/**
 * swap - swaps 2 nodes in a doubly-linked list
 * @c: address of first node
 * @d: address of second node
 * Author :Linet Gitonga
 *
 * Return: void
 */
void swap(listint_t *c, listint_t *d)
{
	if (c->prev)
		c->prev->next = d;
	if (d->next)
		d->next->prev = c;
	a->next = d->next;
	d->prev = c->prev;
	c->prev = d;
	d->next = c;

}

/**
 * insertion_sort_list - insertion sorts a doubly-linked list
 * @list: address of pointer to head node
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *i, *j;

	if (!list || !*list || !(*list)->next)
		return;
	i = (*list)->next;
	while (i)
	{
		j = i;
		i = i->next;
		while (j && j->prev)
		{
			if (j->prev->n > j->n)
			{
				swap(j->prev, j);
				if (!j->prev)
					*list = j;
				print_list((const listint_t *)*list);
			}
			else
				j = j->prev;
		}

	}
}
