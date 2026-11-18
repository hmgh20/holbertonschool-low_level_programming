# C - Structures, typedef

This repository contains C programming projects completed as part of the Holberton School curriculum. The focus of this project is learning how to define and use structures (`struct`), understand how memory is laid out for structured data, use typedefs for cleaner code, and work with pointers to structures.

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
| **`dog.h`** | Header file defining the `struct dog` type with members for name, age, and owner. |
| **`main.h`** | Project header file including `dog.h` and common prototypes. |

---

## Requirements

* Allowed editors: `vi`, `vim`, `emacs`
* All your files will be compiled on Ubuntu 20.04 LTS using `gcc` using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
* Your code should use the **Betty style**. It will be checked using `betty-style.pl` and `betty-doc.pl`.
* Global variables are not allowed.

---

## Compilation & Testing

To compile any of the programs with a main file, use the following `gcc` command format:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <main_file.c> -o <output_executable>
