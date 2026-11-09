# Holberton School - Low-Level Programming (C)

This repository contains C programming projects and exercises completed as part of the Holberton School / ALX software engineering curriculum. It focuses on low-level concepts, memory management, pointers, arrays, strings, and performance benchmarking.

---

## 🛠️ Environment & Compilation Standards

All C files in this repository are written and tested to comply with strict Holberton/ALX standards:
* **Compiler:** `gcc` / `clang`
* **Compilation Flags:** `-Wall -pedantic -Werror -Wextra -std=gnu89`
* **Operating System:** Tested on Linux (Ubuntu) and macOS (with `-Wno-long-long` where applicable).

---

## 📂 Directory Structure

### 1. `pointers_arrays_strings/`
Focuses on understanding memory addresses, pointers, dereferencing, arrays, and string manipulation.
* **`0-reset_to_98.c`**: A function that takes a pointer to an `int` and updates the value it points to to `98`.

### 2. `benchmarking/`
Explores performance analysis, algorithmic efficiency, and green software optimization.
* **`baseline_loop.c`**: Baseline loop performance evaluation.
* **`comparison_algorithms.c`**: Comparing $O(N^2)$ versus $O(N)$ algorithmic execution times.
* **`instrumentation_lab.c`**: Phase-by-phase clock instrumentation of a multi-phase program.
* **`green_efficiency_analysis.md`**: Written report analyzing runtime, complexity, and energy consumption.

---

## 🚀 How to Compile and Run

To compile any C file adhering to the standard flags, use the following template:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 filename.c -o output_name
./output_name
