#include "lists.h"

/**
 * find_listint_loop - find the loop contained in
 *		a listint_t linkec list.
 * @head: A pointer to the head of listint_t list.
 *
 * Return: if there is no loop - NULL.
 *	Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{

	listint_t *
