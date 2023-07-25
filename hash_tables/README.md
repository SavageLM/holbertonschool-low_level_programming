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
'hash_table_t *hash_table_create(unsigned long int size);'
'unsigned long int hash_djb2(const unsigned char *str);'
'unsigned long int key_index(const unsigned char *key, unsigned long int size);'
int hash_table_set(hash_table_t *ht, const char *key, const char *value);'
'char *hash_table_get(const hash_table_t *ht, const char *key);'
'void hash_table_print(const hash_table_t *ht);'
'void hash_table_delete(hash_table_t *ht);'

##### Compilation
`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c'

### Repo Files
| **File** | *__Description__* |
|----------|----------------:|
|hash_tables.h|Header file containing all structs and prototypes used|
|0-hash_table_create.c|creates a hash table|
|1-djb2.c|implements the djb2 algorithm|
|2-key_index.c| gives you the index of a key|
|3-hash_table_set.c|adds an element to the hash table|
|4-hash_table_get.c|retrieves a value associated with a key|
|5-hash_table_print.c|prints a hash table|
|6-hash_table_delete.c|deletes a hash table|
