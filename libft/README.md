# libft

A re-implementation of standard C library functions, built from scratch as part of the 42 curriculum.

## Functions

### Part 1 - Libc functions
| Function | Description |
|----------|-------------|
| ft_memset | Fills memory with a constant byte |
| ft_bzero | Zeroes a byte string |
| ft_memcpy | Copies memory area |
| ft_memmove | Copies memory area (handles overlap) |
| ft_memchr | Locates byte in byte string |
| ft_memcmp | Compares byte string |
| ft_strlen | Computes string length |
| ft_isalpha | Tests for alphabetic character |
| ft_isdigit | Tests for decimal digit |
| ft_isalnum | Tests for alphanumeric character |
| ft_isascii | Tests for ASCII character |
| ft_isprint | Tests for printable character |
| ft_toupper | Converts to uppercase |
| ft_tolower | Converts to lowercase |
| ft_strchr | Locates character in string |
| ft_strrchr | Locates character in string (reverse) |
| ft_strncmp | Compares strings |
| ft_strlcpy | Size-bounded string copy |
| ft_strlcat | Size-bounded string concatenation |
| ft_strnstr | Locates substring in string |
| ft_atoi | Converts string to integer |
| ft_calloc | Allocates and zeroes memory |
| ft_strdup | Duplicates a string |

### Part 2 - Additional functions
| Function | Description |
|----------|-------------|
| ft_substr | Extracts substring |
| ft_strjoin | Joins two strings |
| ft_strtrim | Trims characters from string ends |
| ft_split | Splits string by delimiter |
| ft_itoa | Converts integer to string |
| ft_strmapi | Applies function to each character |
| ft_striteri | Applies function to each character (with index) |
| ft_putchar_fd | Outputs character to file descriptor |
| ft_putstr_fd | Outputs string to file descriptor |
| ft_putendl_fd | Outputs string with newline to file descriptor |
| ft_putnbr_fd | Outputs integer to file descriptor |

### Part 3 - Linked list functions
| Function | Description |
|----------|-------------|
| ft_lstnew | Creates new list node |
| ft_lstadd_front | Adds node to front of list |
| ft_lstsize | Counts nodes in list |
| ft_lstlast | Returns last node |
| ft_lstadd_back | Adds node to back of list |
| ft_lstdelone | Deletes a node |
| ft_lstclear | Deletes and frees list |
| ft_lstiter | Iterates over list |
| ft_lstmap | Applies function to list, creating new list |

## Usage

```bash
make        # compile the library
make clean  # remove object files
make fclean # remove object files and library
make re     # recompile everything
```

## Author

gustde-s | 42