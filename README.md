# LIBFT

### Part 1: Libc Functions
These functions mimic the behavior of their standard C library counterparts.
#### `<ctype.h>`
| Function | Description |
| :--- | :--- |
| [`ft_isalpha`](libft/ft_isalpha.c) | Checks if a character is alphabetic. |
| [`ft_isdigit`](libft/ft_isdigit.c) | Checks if a character is a digit (0-9). |
| [`ft_isalnum`](libft/ft_isalnum.c) | Checks if a character is alphanumeric. |
| [`ft_isascii`](libft/ft_isascii.c) | Checks if a character fits into the ASCII character set. |
| [`ft_isprint`](libft/ft_isprint.c) | Checks if a character is printable. |
| [`ft_toupper`](libft/ft_toupper.c) | Converts a character to its uppercase equivalent. |
| [`ft_tolower`](libft/ft_tolower.c) | Converts a character to its lowercase equivalent. |

#### `<string.h>` / `<strings.h>`

| Function | Description |
| :--- | :--- |
| [`ft_strlen`](libft/ft_strlen.c) | Calculates the length of a string. |
| [`ft_memset`](libft/ft_memset.c) | Fills a block of memory with a specific value. |
| [`ft_bzero`](libft/ft_bzero.c) | Fills a block of memory with zero-valued bytes. |
| [`ft_memcpy`](libft/ft_memcpy.c) | Copies a block of memory from a source to a destination. |
| [`ft_memmove`](libft/ft_memmove.c) | Copies a block of memory, handling overlapping areas safely. |
| [`ft_strlcpy`](libft/ft_strlcpy.c) | Copies a string to a buffer with size-checking. |
| [`ft_strlcat`](libft/ft_strlcat.c) | Concatenates a string to a buffer with size-checking. |
| [`ft_strchr`](libft/ft_strchr.c) | Locates the first occurrence of a character in a string. |
| [`ft_strrchr`](libft/ft_strrchr.c) | Locates the last occurrence of a character in a string. |
| [`ft_strncmp`](libft/ft_strncmp.c) | Compares up to `n` characters of two strings. |
| [`ft_memchr`](libft/ft_memchr.c) | Scans memory for the first occurrence of a character. |
| [`ft_memcmp`](libft/ft_memcmp.c) | Compares two blocks of memory. |
| [`ft_strnstr`](libft/ft_strnstr.c) | Locates a substring within the first `n` bytes of a string. |
| [`ft_strdup`](libft/ft_strdup.c) | Duplicates a string by allocating new memory. |

#### `<stdlib.h>`

| Function | Description |
| :--- | :--- |
| [`ft_atoi`](libft/ft_atoi.c) | Converts a string to an integer. |
| [`ft_calloc`](libft/ft_calloc.c) | Allocates memory for an array and initializes it to zero. |

### Part 2: Additional Functions

A collection of useful functions not found in the standard C library.

| Function | Description |
| :--- | :--- |
| [`ft_substr`](libft/ft_substr.c) | Allocates and returns a substring from a string. |
| [`ft_strjoin`](libft/ft_strjoin.c) | Allocates and returns a new string, result of concatenating two strings. |
| [`ft_strtrim`](libft/ft_strtrim.c) | Allocates and returns a copy of a string with specified characters removed from the beginning and end. |
| [`ft_split`](libft/ft_split.c) | Allocates and returns an array of strings obtained by splitting a string using a delimiter character. |
| [`ft_itoa`](libft/ft_itoa.c) | Allocates and returns a string representation of an integer. |
| [`ft_strmapi`](libft/ft_strmapi.c) | Applies a function to each character of a string to create a new string. |
| [`ft_striteri`](libft/ft_striteri.c) | Applies a function to each character of a string. |
| [`ft_putchar_fd`](libft/ft_putchar_fd.c) | Writes a single character to a given file descriptor. |
| [`ft_putstr_fd`](libft/ft_putstr_fd.c) | Writes a string to a given file descriptor. |
| [`ft_putendl_fd`](libft/ft_putendl_fd.c) | Writes a string to a file descriptor, followed by a newline. |
| [`ft_putnbr_fd`](libft/ft_putnbr_fd.c) | Writes an integer to a given file descriptor. |

### Linked List Functions

Functions to create and manage a singly linked list.

| Function | Description |
| :--- | :--- |
| [`ft_lstnew`](libft/ft_lstnew.c) | Creates a new list element. |
| [`ft_lstadd_front`](libft/ft_lstadd_front.c) | Adds an element to the beginning of a list. |
| [`ft_lstsize`](libft/ft_lstsize.c) | Counts the number of elements in a list. |
| [`ft_lstlast`](libft/ft_lstlast.c) | Returns the last element of a list. |
| [`ft_lstadd_back`](libft/ft_lstadd_back.c) | Adds an element to the end of a list. |
| [`ft_lstdelone`](libft/ft_lstdelone.c) | Frees the memory of a single list element. |
| [`ft_lstclear`](libft/ft_lstclear.c) | Deletes and frees all elements of a list. |
| [`ft_lstiter`](libft/ft_lstiter.c) | Applies a function to the content of each element in a list. |
| [`ft_lstmap`](libft/ft_lstmap.c) | Creates a new list by applying a function to each element of an existing list. |

## Building the Library

2.  **Compile the library:**
    The included `Makefile` provides several targets for building and managing the library.
    ```sh
    # Compiles source files and creates the static library libft.a
    make all

    # Removes object files (.o)
    make clean

    # Removes object files and the library file (libft.a)
    make fclean

    # Re-compiles the library from scratch
    make re
    ```


The library contains 43 functions divided into several categories.

1.  **Character Classification and Conversion**     
Functions for identifying and converting characters.
    ```sh
    ft_isalpha	Checks whether a character is alphabetic       
    ft_isdigit	Checks whether a character is a digit   
    ft_isalnum	Checks whether a character is alphanumeric  
    ft_isascii	Checks whether a character belongs to the ASCII character Sets
    ft_isprint	Checks whether a character is printable     
    ft_toupper	Converts a lowercase letter to uppercase    
    ft_tolower	Converts an uppercase letter to lowercase   
    ```

2.  **String Manipulation**     
Functions for measuring, searching, copying, and manipulating strings.
    ```sh
    ft_strlen	Calculates the length of a string       
    ft_strlcpy	Copies a string into a size-limited buffer  
    ft_strlcat	Appends a string to a size-limited buffer   
    ft_strchr	Locates the first occurrence of a character        
    ft_strrchr	Locates the last occurrence of a character      
    ft_strncmp	Compares two strings up to a specified length       
    ft_strnstr	Locates a substring within a limited number of characters       
    ft_strdup	Allocates and duplicates a string   
    ```

3. **Memory Management**
Functions for manipulating memory and allocating memory dynamically.
    ```sh
    ft_memset	Fills a memory region with a specified byte     
    ft_bzero	Sets a memory region to zero    
    ft_memcpy	Copies bytes between non-overlapping memory regions     
    ft_memmove	Copies bytes safely between potentially overlapping memory regions  
    ft_memchr	Searches a memory region for a byte     
    ft_memcmp	Compares two memory regions     
    ft_calloc	Allocates and initializes memory to zero    
    ```
    
4. **Conversion Functions**
Functions for converting between strings and integers.
    ```sh   
    ft_atoi	Converts a string to an integer
    ft_itoa	Converts an integer to a dynamically allocated string
    ```

5. **Additional String Utilities**
Functions for creating and modifying dynamically allocated strings.
    ```sh
    ft_substr	Extracts a substring
    ft_strjoin	Concatenates two strings into a newly allocated string
    ft_strtrim	Removes specified characters from both ends of a string
    ft_split	Splits a string into an array of strings
    ft_strmapi	Applies a function to each character and creates a new string
    ft_striteri	Applies a function to each character of an existing string
    ```
6. **File Descriptor Output**
Functions for writing data to a specified file descriptor.
    ```sh
    ft_putchar_fd	Writes a character
    ft_putstr_fd	Writes a string
    ft_putendl_fd	Writes a string followed by a newline
    ft_putnbr_fd	Writes an integer
    ```
7. **Linked List Functions**
Functions for creating, modifying, traversing, and deleting singly linked lists.    
Each node is represented by the following structure:    
    ```sh
    typedef struct s_list
    {
        void            *content;
        struct s_list   *next;
    }   t_list;
    ```
    ```sh   
    ft_lstnew	Creates a new node
    ft_lstadd_front	Adds a node to the beginning of a list
    ft_lstsize	Counts the nodes in a list
    ft_lstlast	Returns the last node
    ft_lstadd_back	Adds a node to the end of a list
    ft_lstdelone	Deletes a single node
    ft_lstclear	Deletes an entire list
    ft_lstiter	Applies a function to every node’s content
    ft_lstmap	Creates a new list by applying a function to each node’s content
 ```