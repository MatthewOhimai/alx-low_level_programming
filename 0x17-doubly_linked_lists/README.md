# 0x17. Doubly Linked Lists

This project is about implementing and working with doubly linked lists in C.

## Requirements

- Allowed editors: vi, vim, emacs
- All files will be interpreted/compiled on Ubuntu 20.04 LTS using python3 (version 3.8.5)
- All files should end with a new line
- Code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- No global variables allowed
- No more than 5 functions per file
- Only allowed C standard library functions are malloc, free, printf, and exit
- Function prototypes should be included in a header file called lists.h
- All header files should be include guarded

## Data Structure

```c
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

