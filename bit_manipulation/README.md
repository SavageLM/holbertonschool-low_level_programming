#**Project**'bit_manipulation'

## Introduction
> This README is for the bit manipulation project at Holberton. It countains the requirements, prototypes, compiler used, and a list of files.

### Requirements
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS
- Your code should use the Betty style.
- You are not allowed to use global variables
- No more than 5 functions per file

##### Prototypes
'unsigned int binary_to_uint(const char *b);'
'void print_binary(unsigned long int n);'
'int get_bit(unsigned long int n, unsigned int index);'
'int set_bit(unsigned long int *n, unsigned int index);'
'int clear_bit(unsigned long int *n, unsigned int index);'
'unsigned int flip_bits(unsigned long int n, unsigned long int m);'

##### Compilation
`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c'	

### Repo Files
| **File** | *__Description__* |
|----------|----------------:|
|main.h|Header file containg all structs and prototypes|
|0-binary_to_uint.c| converts a binary number to an unsigned int.|
|1-print_binary.c|prints the binary representation of a number.|
|2-get_bit.c|returns the value of a bit at a given index.|
|3-set_bit.c|sets the value of a bit to 1 at a given index.|
|4-clear_bit.c| sets the value of a bit to 0 at a given index.|
|5-flip_bits.c|returns the number of bits you would need to flip to get from one number to another.|
