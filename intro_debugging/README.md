# C - Intro Debugging

This project is part of the low-level programming curriculum at Holberton School. It focuses on tracing code logic, identifying logical and syntax errors, and fixing functions to produce expected outcomes.

## Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- All files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -pedantic -Werror -Wextra -std=gnu89`
- All your files should end with a new line
- Your code should use the Betty style (checked using `betty-style.pl` and `betty-doc.pl`)

## Tasks

### 0. Debugging a Counting Function
* **File:** `sum_to_n.c`
* **Description:** Fixed a logic error in a loop (`sum_to_n`) where the upper limit condition was exclusive (`< n` instead of `<= n`) and the function incorrectly returned `n` instead of the accumulated `sum`.
