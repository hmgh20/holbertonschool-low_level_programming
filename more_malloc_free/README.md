# C - malloc, free & more_malloc_free

This repository contains C programming projects completed as part of the Holberton School curriculum. The focus of these projects is understanding dynamic memory allocation, managing the heap vs. the stack, preventing memory leaks, and proper error handling using `malloc`, `free`, and related functions.

---

## Technologies & Environment
* **Language:** C (Standard: `gnu89`)
* **Compiler:** `gcc` (with flags `-Wall`, `-Werror`, `-Wextra`, `-pedantic`)
* **Operating System:** Ubuntu 20.04 LTS / Linux (64-bit)
* **Style Guidelines:** Betty Coding Style

---

## Files & Descriptions

| Filename | Description |
| :--- | :--- |
| **`main.h`** | Header file containing all function prototypes and standard library includes used across the project. |
| **`2-str_concat.c`** | A function that concatenates two strings, dynamically allocating memory for the result and handling `NULL` inputs as empty strings. |
| **`3-alloc_grid.c`** | A function that returns a pointer to a 2-dimensional array of integers, initializing all elements to `0` and handling cleanup upon partial allocation failures. |
| **`4-free_grid.c`** | A function that frees a 2-dimensional grid previously created by `alloc_grid`. |
| **`0-malloc_checked.c`** | A function that allocates memory using `malloc` and terminates the process with status `98` if the allocation fails. |

---

## Requirements

* Allowed editors: `vi`, `vim`, `emacs`
* All your files will be compiled on Ubuntu 20.04 LTS using `gcc` using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
* Your code should use the **Betty style**. It will be checked using `betty-style.pl` and `betty-doc.pl`.
* Global variables are not allowed.
* The allowed functions from the standard library are `malloc` and `free`.

---

## Compilation & Testing

To compile any of the programs, use the following `gcc` command format:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <main_file.c> <implementation_file.c> -o <output_executable>
