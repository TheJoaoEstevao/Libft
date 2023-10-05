## Libft:
My implementation of Libft, the first 42 School Project!

### Key Components:

1. **Standard Libc Functions:**
   - Functions like `ft_strlen`, `ft_strdup`, and `ft_toupper` mimic the behavior of `strlen`, `strdup`, and `toupper` from the standard C library.
   
2. **Additional Functions:**
   - Functions like `ft_substr`, `ft_strjoin`, and `ft_strtrim` which are not available in the standard library but are very useful in handling strings.
   
3. **Bonus Functions:**
   - Functions that work with linked lists, like `ft_lstnew`, `ft_lstadd_front`, and `ft_lstsize`.

### Structure:

- **String Functions:** 
  - Handle string manipulations and queries, e.g., `ft_strlcat`, `ft_strncmp`, and `ft_strnstr`.
  
- **Memory Functions:** 
  - Deal with memory operations, e.g., `ft_memset`, `ft_memcpy`, and `ft_memmove`.
  
- **Character Check Functions:** 
  - Check character types, e.g., `ft_isdigit`, `ft_isalpha`, and `ft_isprint`.
  
- **List Functions:** 
  - Perform operations on linked lists, e.g., `ft_lstmap`, `ft_lstiter`, and `ft_lstclear`.

- **File Descriptor Functions:**
  - Perform output operations on file descriptors, e.g., `ft_putchar_fd`, `ft_putstr_fd`, and `ft_putendl_fd`.

### Usage:

- We use `libft` in our C projects to utilize basic and additional utility functions.
- It helps us to manage strings, memory, and linked lists without using the standard library functions.
- It provides a foundation for understanding how standard functions work internally.

### Makefile:

- The `Makefile` in `libft` compiles source files into object files and archives them into a static library.
- It allows for easy compilation and usage of the library in other projects.

### Importance:

- `Libft` is foundational and is used in many subsequent projects in the 42 curriculum.
- It enhances understanding and implementation skills related to strings, memory, and linked lists in C programming.
- It encourages code reuse, as we can utilize this library in future projects, saving time and ensuring reliability.
