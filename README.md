Libft

Description

Libft is a C programming project developed as part of the 42 curriculum at Codam Coding College.

The objective is to create a personal library of commonly used C functions by reimplementing standard library functions and developing additional utilities.

The project introduces fundamental programming concepts, including memory management, pointer manipulation, string operations, dynamic memory allocation, and linked lists.

The resulting library, libft.a, is a static library that can be reused in future C projects.

Instructions

Compilation

Clone the repository:

git clone https://github.com/bre139/libFT.git
cd libFT

Compile the library:

make

This generates the static library:

libft.a

The project is compiled using:

cc -Wall -Wextra -Werror

Makefile Commands

Command	Description
make	Compiles the library
make all	Compiles the library
make clean	Removes object files
make fclean	Removes object files and the library
make re	Recompiles the entire library

Using the Library

Include the header in your C program:

#include "libft.h"

Compile your program with the library:

cc -Wall -Wextra -Werror main.c -L. -lft -o program

Run the executable:

./program

Library Overview

The library contains 43 functions divided into several categories.

1. Character Classification and Conversion

Functions for identifying and converting characters.

Function	Description
ft_isalpha	Checks whether a character is alphabetic
ft_isdigit	Checks whether a character is a digit
ft_isalnum	Checks whether a character is alphanumeric
ft_isascii	Checks whether a character belongs to the ASCII character set
ft_isprint	Checks whether a character is printable
ft_toupper	Converts a lowercase letter to uppercase
ft_tolower	Converts an uppercase letter to lowercase

2. String Manipulation

Functions for measuring, searching, copying, and manipulating strings.

Function	Description
ft_strlen	Calculates the length of a string
ft_strlcpy	Copies a string into a size-limited buffer
ft_strlcat	Appends a string to a size-limited buffer
ft_strchr	Locates the first occurrence of a character
ft_strrchr	Locates the last occurrence of a character
ft_strncmp	Compares two strings up to a specified length
ft_strnstr	Locates a substring within a limited number of characters
ft_strdup	Allocates and duplicates a string

3. Memory Management

Functions for manipulating memory and allocating memory dynamically.

Function	Description
ft_memset	Fills a memory region with a specified byte
ft_bzero	Sets a memory region to zero
ft_memcpy	Copies bytes between non-overlapping memory regions
ft_memmove	Copies bytes safely between potentially overlapping memory regions
ft_memchr	Searches a memory region for a byte
ft_memcmp	Compares two memory regions
ft_calloc	Allocates and initializes memory to zero

4. Conversion Functions

Functions for converting between strings and integers.

Function	Description
ft_atoi	Converts a string to an integer
ft_itoa	Converts an integer to a dynamically allocated string

5. Additional String Utilities

Functions for creating and modifying dynamically allocated strings.

Function	Description
ft_substr	Extracts a substring
ft_strjoin	Concatenates two strings into a newly allocated string
ft_strtrim	Removes specified characters from both ends of a string
ft_split	Splits a string into an array of strings
ft_strmapi	Applies a function to each character and creates a new string
ft_striteri	Applies a function to each character of an existing string

6. File Descriptor Output

Functions for writing data to a specified file descriptor.

Function	Description
ft_putchar_fd	Writes a character
ft_putstr_fd	Writes a string
ft_putendl_fd	Writes a string followed by a newline
ft_putnbr_fd	Writes an integer

7. Linked List Functions

Functions for creating, modifying, traversing, and deleting singly linked lists.

Each node is represented by the following structure:

typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;

Function	Description
ft_lstnew	Creates a new node
ft_lstadd_front	Adds a node to the beginning of a list
ft_lstsize	Counts the nodes in a list
ft_lstlast	Returns the last node
ft_lstadd_back	Adds a node to the end of a list
ft_lstdelone	Deletes a single node
ft_lstclear	Deletes an entire list
ft_lstiter	Applies a function to every node’s content
ft_lstmap	Creates a new list by applying a function to each node’s content

Technical Details

Language: C

Compiler: cc

Compilation flags: -Wall -Wextra -Werror

Library type: Static library (.a)

Build system: Makefile

Coding standard: 42 Norm

The project focuses on understanding how common C functions operate internally rather than relying on existing implementations.

Particular attention is given to:

* Pointer arithmetic and memory addresses.
* Dynamic memory allocation and deallocation.
* Memory safety and overlapping memory regions.
* String manipulation and null termination.
* Linked list structures and traversal.
* Handling edge cases and invalid inputs.

Resources

References

* C standard library documentation: https://en.cppreference.com/w/c
* Linux manual pages: https://man7.org/linux/man-pages/
* GNU Make documentation: https://www.gnu.org/software/make/manual/
* 42 Norm coding standard: https://github.com/42School/norminette

AI Usage

ChatGPT was used as a learning resource to help explain C programming concepts, clarify pointer and memory operations, and assist with understanding function behavior and debugging.

AI was also used to assist with the structure and wording of this README.

The implementation of the library functions is intended to demonstrate personal understanding of the concepts covered in the project.

Author

bre139

42 Network — Codam Coding College
