<p align="right">
  <a href="es.README.md">
    <img src="https://img.shields.io/badge/🌐%20Español-README-green?style=for-the-badge" alt="README Español" />
  </a>
</p>

<div align="left">
    <img src='https://img.shields.io/badge/Barcelona-black?style=flat&logo=42&logoColor=white'/>
    <img src="https://img.shields.io/badge/score-125%20%2F%20100-success?color=green&style=flat" />
</div>

# Push_Swap
_This project has been created as part of the 42 curriculum by `rmarin-n`_

##  **Description**
`push_swap` is a sorting algorithm project where the goal is to sort a list of integers in ascending order using two stacks (stack **a** and an auxiliary stack **b**) and a limited set of operations, achieving the sort with the minimum number of moves possible.   
The program takes a series of integers as input (either as separate arguments or as a single quoted string of space-separated numbers) and outputs the sequence of operations needed to sort the numbers on stack **a**.

### Key features
- Handles input parsing, including a single string with multiple numbers.
- Checks for errors: non-numeric input, duplicates, and integer overflow.
- Uses two different sorting strategies:
    - Optimized handling for small stacks (≤ 5 elements).
    - Radix sort (LSD in base 2 using assigned indices) for larger stacks.
- Implements all required operations efficiently.
- Fully compliant with the 42 Norm (no `for` loops, limited lines per function, etc.).
---

## **Instructions**

### Allowed operations
These are the only operations the program can use and output:

| Operation | Description                               |
|-----------|-------------------------------------------|
| `sa`      | Swap the first two elements of stack a    |
| `sb`      | Swap the first two elements of stack b    |
| `ss`      | `sa` and `sb` at the same time            |
| `pa`      | Push top of b to top of a                 |
| `pb`      | Push top of a to top of b                 |
| `ra`      | Rotate a upwards (first → last)           | 
| `rb`      | Rotate b upwards                          | 
| `rr`      | `ra` and `rb` at the same time            |
| `rra`     | Reverse rotate a downwards (last → first) |
| `rrb`     | Reverse rotate b downwards                |
| `rrr`     | `rra` and `rrb` at the same time          |

### Compilation
The project includes a standard `Makefile` with the following rules:

- `make` or `make all` → builds the `push_swap` executable.
- `make clean` → removes object files (`.o`).
- `make fclean` → removes object files and the executable.
- `make re` → rebuilds the project from scratch.

Compilation uses the flags `-Wall -Wextra -Werror`.

### Usage
```bash
./push_swap [number1 number2 number3 ...]
```
---

## **Resources**
    - https://medium.com/nerd-for-tech/push-swap-tutorial-fa746e6aba1e   
    - https://www.programiz.com/c-programming/bitwise-operators
