*This project has been created as part of the 42 curriculum by auzundag* 

# Libft - C Library Project

## Description

Libft is a custom C library that recreates standard C functions from the C standard library. It contains useful functions for working with strings, memory, lists, and characters. This project is a great way to understand how common C functions work and improve your coding skills.

The library includes functions that are used very often in programming, like copying memory, working with strings, and checking characters.

## Instructions 

### Build the Library

Run this command to compile the library:

```bash
make
```

This creates a `libft.a` file which is the compiled library.

### Clean Up

To remove compiled files:

```bash
make clean      # removes .o files
make fclean     # removes .o files and the library
make re         # cleans and rebuilds everything
```

### Using the Library

1. Include the header file in your C program:
   ```c
   #include "libft.h"
   ```

2. Compile your program with the library:
   ```bash
   gcc your_program.c libft.a -o your_program
   ```

## Resources Used

- **YouTube** - Tutorials on C programming and data structures
- **GitHub** - Looking at other people's code to understand different approaches
- **StackOverflow** - Finding answers to specific coding problems
- **AI** - Used for testing, finding edge cases, and learning different ways to solve problems


## Features & Functions

### Memory Functions
- `ft_bzero` - Set memory to zero
- `ft_memset` - Fill memory with a value
- `ft_memcpy` - Copy memory
- `ft_memmove` - Copy memory safely
- `ft_memchr` - Search for a byte in memory
- `ft_memcmp` - Compare memory
- `ft_calloc` - Allocate and initialize memory

### String Functions
- `ft_strlen` - Get string length
- `ft_strchr` - Find character in string
- `ft_strrchr` - Find last character in string
- `ft_strlcpy` / `ft_strlcat` - Safe string copy/concat
- `ft_strdup` - Duplicate a string
- `ft_strjoin` - Join two strings
- `ft_strtrim` - Remove whitespace from string
- `ft_substr` - Get substring
- `ft_split` - Split string by delimiter
- `ft_strnstr` - Find substring
- `ft_strncmp` - Compare strings
- `ft_strmapi` / `ft_striteri` - Apply function to each character

### Character Functions
- `ft_isalpha` - Check if letter
- `ft_isdigit` - Check if digit
- `ft_isalnum` - Check if alphanumeric
- `ft_isascii` - Check if ASCII
- `ft_isprint` - Check if printable
- `ft_tolower` / `ft_toupper` - Convert case

### Conversion Functions
- `ft_atoi` - String to integer
- `ft_itoa` - Integer to string

### Linked List Functions
- `ft_lstnew` - Create new list node
- `ft_lstadd_front` / `ft_lstadd_back` - Add node to list
- `ft_lstsize` - Get list length
- `ft_lstlast` - Get last node
- `ft_lstdelone` / `ft_lstclear` - Delete node/list
- `ft_lstiter` - Apply function to each node
- `ft_lstmap` - Create new list by applying function

### Output Functions
- `ft_putchar_fd` - Write character to file descriptor
- `ft_putstr_fd` - Write string to file descriptor
- `ft_putendl_fd` - Write string with newline
- `ft_putnbr_fd` - Write number to file descriptor


## Notes

This project helped me understand how standard C functions work behind the scenes. Testing with many different inputs was really important to make sure everything works correctly.
