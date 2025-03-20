# Libft - Custo C Standard Library

## 📌 Overview
Libft is a custom implementation of essential functions from the C standard library. This project is part of the 42 School curriculum and serves as a foundation for understanding low-level programming and memory management.

## ⚡ Features
- Reimplementation of common `libc` functions (e.g., `strlen`, `strcpy`, `strcmp`, `memcpy`)
- Additional utility functions for string manipulation and memory handling
- Implementation of linked lists
- Modular, reusable code structure

## 🚀 Installation
To compile and use Libft in your own projects:
```sh
git clone https://github.com/Tudor-Ursescu/Libft.git
cd Libft
make
```
This will generate a static library `libft.a`.

## 🛠️ Usage
To use Libft in your C programs, include the header and link the library:
```c
#include "libft.h"
```
Compile your project with:
```sh
gcc -Wall -Wextra -Werror your_file.c -L. -lft -o output
```
## 📜 License
This project is open-source under the [MIT License](LICENSE).

## 👤 Author
[**Tudor Ursescu**](https://github.com/Tudor-Ursescu)