#include "lists.h"


/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    /*Declare a new node pointer.*/
    dlistint_t *new;


    /*Allocate memory for the new node.*/
    new = malloc(sizeof(dlistint_t));
    /*Check if memory allocation failed.*/
    if (new == NULL)
        /*Return NULL if allocation failed.*/
        return (NULL)
new->n = n;

new->prev = NULL;

new->next = *head;

if (*head != NULL)

(*head)->prev = new;
*head = new;

return (new);
}
