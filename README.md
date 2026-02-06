# libk

**libk** is a custom C utility library inspired by the *concept* behind  
 [École 42](https://42.fr) **libft**, but fully written from scratch and with **absolutely no official or direct relation** to the original project or to École 42.  

This library is a personal learning project that re-implements low-level C functions — including memory utilities, string manipulation, character handling, linked list operations, and other helper routines — as a way to understand how things work under the hood.

The goal of libk is learn C by building things from scratch — understanding low-level behavior, practicing core programming concepts, and experimenting hands-on with ideas inspired by functional programming.

---

### 🚧 Work in Progress

libk is still under active development and not yet fully finished.

---

## Features

### 🧵 String Functions
Includes custom implementations for:
- `k_strlen`, `k_strdup`, `k_strcmp`, `k_strncmp`
- `k_strcpy`, `k_strncpy`, `k_strcat`, `k_strncat`, `k_strlcpy`, `k_strlcat`
- `k_strchr`, `k_strrchr`, `k_strstr`, `k_strnstr`
- `k_strjoin`, `k_strtrim`, `k_split`, `k_substr`
- Functional mapping utilities: `k_strmapi`, `k_striteri`

### 🔣 Character Handling
- `k_isalpha`, `k_isdigit`, `k_isalnum`, `k_isspace`
- `k_toupper`, `k_tolower`

### 🔢 Conversion
- `k_atoi`
- `k_itoa`

### 🧱 Memory Utilities
- `k_bzero`, `k_memset`, `k_memcpy`, `k_memmove`, `k_memcmp`, `k_memchr`
- `k_calloc`

### 🔗 Linked List API
Implements a simple singly-linked list:

```c
typedef struct s_list {
    void *content;
    struct s_list *next;
} t_list;
```
With common operations:

- `k_lstnew`, `k_lstadd_front`, `k_lstadd_back`

- `k_lstlast`, `k_lstsize`

- `k_lstdelone`, `k_lstclear`

- `k_lstiter`, `k_lstmap`

### 🖨 Output Helpers
- `k_putchar`

- `k_putstr`

