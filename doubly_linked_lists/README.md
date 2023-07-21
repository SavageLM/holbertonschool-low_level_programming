#**Project**'doubly linked lists'

## Introduction
> This README is for the doubly linked lists project at Holberton. It countains the requirements, prototypes, compiler used, and a list of files.

### Requirements
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS
- Your code should use the Betty style.
- You are not allowed to use global variables
- No more than 5 functions per file

##### Prototypes
'size_t print_dlistint(const dlistint_t *h);'
'size_t dlistint_len(const dlistint_t *h);'
'dlistint_t *add_dnodeint(dlistint_t **head, const int n);'
'dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);'
'void free_dlistint(dlistint_t *head);'
'dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);'
'int sum_dlistint(dlistint_t *head);'
'dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);'
'int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);'

##### Compilation
`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c'

### Repo Files
| **File** | *__Description__* |
|----------|----------------:|
|lists.h|Header file containing all structs and prototypes used|
|0-print_dlistint.c|prints all the elements of a list|
|1-dlistint_len.c|returns the number of elements in a linked list|
|2-add_dnodeint.c|adds a new node at the beginning of a list|
|3-add_dnodeint_end.c|adds a new node at the end of a list|
|4-free_dlistint.c|Frees a list|
|5-get_dnodeint.c|returns the nth node of a linked list.|
|6-sum_dlistint.c|returns the sum of all the data (n) of a linked list.|
|7-insert_dnodeint.c|inserts a new node at a given position.|
|8-delete_dnodeint.c|deletes the node at index of a list|
