#**Project**'Search Algorithms'

## Introduction
> This README is for the search algorithms project at Holberton. It countains the requirements, prototypes, compiler used, and a list of files.

### Requirements
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS
- Your code should use the Betty style.
- No global variables
- Only stdlib function allowed is printf
- No more than 5 functions per file
- Header files should be include guarded
- Only use system calls when needed

##### Prototypes
- int linear_search(int *array, size_t size, int value)
- int binary_search(int *array, size_t size, int value)

##### Compilation
`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 file_name.c -o'

### Repo Files
| **File** | *__Description__* |
|----------|----------------:|
|main.h|Header file containing all structs and prototypes used|
|0-linear.c|Searches an array using linear search algorithm|
|1-binary.c|Searches an array using Binary search algorithm|
|2-O|Big O notation for wost case linear search of array size n|
|3-O|Big O notation for space complexity of linear search of array size n|
|4-O|Big O notation for time complexity of binary search of array size n|
|5-0|Big O notation for space complexity of binary search of array size n|
|6-O|Big O notation for space complexity of a function|
