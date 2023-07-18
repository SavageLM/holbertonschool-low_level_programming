#**Project**'file_io'

## Introduction
> This README is for the file io project at Holberton. It countains the requirements, prototypes, compiler used, and a list of files.

### Requirements
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS
- Your code should use the Betty style.
- You are not allowed to use global variables
- No more than 5 functions per file

##### Prototypes
'ssize_t read_textfile(const char *filename, size_t letters);'
'int create_file(const char *filename, char *text_content);'
'int append_text_to_file(const char *filename, char *text_content);'
'void file_copy(const char *file_from, const char *file_to);'

##### Compilation
`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c'

### Repo Files
| **File** | *__Description__* |
|----------|----------------:|
|main.h|Header file containing all structs and prototypes used|
|0-read_textfile.c|reads a text file and prints it to the POSIX standard output.|
|1-create_.c|creates a file.|
|2-append_text_to_file.c|appends text at the end of a file.|
|3-cp.c|copies the content of a file to another file.|

