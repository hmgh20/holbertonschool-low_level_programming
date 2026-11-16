# C - malloc, free

A project exploring automatic and dynamic memory allocation in C as part of the Holberton School low-level programming curriculum. This project focuses on using `malloc` and `free` to manage heap memory safely, avoiding memory leaks, and adhering strictly to coding standards (Betty style, C89/gnu89).

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- Compiled on Ubuntu 20.04 LTS using `gcc` with options: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All code files adhere strictly to the **Betty coding style**.
- Global variables are not allowed.
- The allowed standard library function is `malloc` and `free`.

## Files

| File Name | Description |
|-----------|-------------|
| `0-create_array.c` | Function that creates an array of chars and initializes it with a specific char. |
| `main.h` | Header file containing function prototypes for the project. |

## Compilation

To compile your code, use the standard Holberton compilation flags along with your main test file and implementation file:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-create_array.c -o a
