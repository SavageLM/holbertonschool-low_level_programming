#**Project**'singly_linked_lists'

## Introduction
> This README is for the singly linked lists project at Holberton. It countains the requirements, prototypes, compiler used, and a list of files.

### Requirements
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS
- Your code should use the Betty style.
- You are not allowed to use global variables
- No more than 5 functions per file

##### Prototypes
'size_t print_list(const list_t *h);'
'size_t list_len(const list_t *h);'
'list_t *add_node(list_t **head, const char *str);'
'list_t *add_node_end(list_t **head, const char *str);'
'void free_list(list_t *head);'

##### Compilation
`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c'	

### Repo Files
| **File** | *__Description__* |
|----------|----------------:|
|lists.h|Header file containg all structs and prototypes|
|0-print_list.c|Prints all the elements of a list_t list|
|1-list_len.c|Returns the number of elements in a linked list_t list.|
|2-add_node.c|Adds a new node at the beginning of a list_t list|
|3-add_node_end.c|Adds a new node at the end of a list_t list|
|4-free_list.c|frees a list_t list|
