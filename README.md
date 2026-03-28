*This project has been created as part of the 42 curriculum by yhaouas.*

# push_swap

## Description
**push_swap** is a sorting algorithm project from the 42 curriculum.  
The goal is to sort a stack of integers using a limited set of operations and the smallest possible number of moves.

You are given a list of integers as arguments. These numbers are placed in **stack A**, and you must sort them in ascending order using a second stack (**stack B**) and a predefined set of operations.

This project focuses on:
- Algorithm optimization
- Complexity reduction
- Data structure manipulation (linked lists / stacks)


## Instructions

### Compilation
To compile the project, run:

make

This will generate the executable:

./push_swap

### Usage

Run the program with a list of integers:

./push_swap 2 1 3 6 5 8

Or:

./push_swap "2 1 3 6 5 8"

The program outputs a sequence of operations that sorts the stack.

### Operations

The allowed operations are:

sa : swap the first 2 elements of stack A
sb : swap the first 2 elements of stack B
pa : push top element from B to A
pb : push top element from A to B
ra : rotate stack A (first element becomes last)
rb : rotate stack B
rra : reverse rotate A
rrb : reverse rotate B

Features
Handles multiple input formats (quoted or separate arguments)
Error management (invalid input, duplicates, overflow)
Optimized sorting for:
Small stacks (2–5 numbers)
Large stacks (using chunk-based or index-based algorithm)
Efficient move count
Example
$ ./push_swap 3 2 1
sa
rra

### Technical Choices

Language: C
Data structure: Linked lists
Sorting strategy:
Large cases: chunk-based algorithm (divide & conquer)

## Resources

Documentation & References
42 Subject (push_swap PDF)
https://en.wikipedia.org/wiki/Sorting_algorithm
https://en.wikipedia.org/wiki/Time_complexity
Tutorials & Guides
https://www.geeksforgeeks.org/stack-data-structure/

### AI Usage

AI tools (such as ChatGPT) were used for:

Understanding sorting strategies (chunk algorithm, indexing)
Debugging specific issues (segmentation faults, logic errors)
Structuring the project and improving code readability
Writing and refining this README

## Author
younesse25
