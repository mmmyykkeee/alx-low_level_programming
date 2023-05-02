#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

/* Function prototypes */
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int pop_listint(listint_t **head);
listint_t *reverse_listint(listint_t **head);
void print_array(const int *array, size_t size);
void merge_sort(int *array, size_t size);
listint_t *insert_node(listint_t **head, int number);

#endif /* LISTS_H */