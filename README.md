# Libft

> A personal C library that reimplements common standard functions, including bonus linked list utilities.

## About

`libft` is the first project at Hive Helsinki. The goal is to rebuild standard C functions like `strlen`, `memcpy`, `strchr`, etc., to understand memory, pointers, and low-level logic better. I also completed the **bonus part**, which includes functions for handling **linked lists**.

## Features

- Reimplementation of libc functions (`strlen`, `atoi`, `memmove`, etc.)
- Bonus: linked list functions (`ft_lstnew`, `ft_lstadd_front`, `ft_lstlast`, etc.)
- Used as a base library in `ft_printf`

## Installation & Usage

```bash
# Clone and compile
git clone https://github.com/Justyuanz/libft.git
cd libft
make
```

### Compile 
```bash
cc -Wall -Wextra -Werror main.c libft.a 
./a.out
```

## 🧪 Example

```c
ft_strlen("hello");           // returns 5
ft_strdup("yo");              // returns a copy of string
ft_itoa(42);                  // returns "42"
ft_atoi("   -123abc");        // returns -123
ft_split("a,b,c", ',');       // returns ["a", "b", "c", NULL]
ft_lstnew(data);              // creates new list node
```

## Skills Learned

- Manual memory handling and pointer logic
- Implementing low-level C functions without libc
- Creating and using a static library (`.a`)
- Writing and using Makefile and header file
- Understanding and implementing **linked lists**

