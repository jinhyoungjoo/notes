# Memory

## Heap Allocation
- The current limit of the heap is called the program break.

## Memory Related Library Functions
- `brk`: Set the program break to the given location.
- `sbrk`
    - Adjust the program break by adding the given increment.
    - On success, it returns the address of the previous program break.
    - `sbrk(0)` can be used to determine the current program break with no heap allocation. 
- `malloc`
- `free`
    - `free` does not lower the program break. It adds the block of memory to the list of free blocks.
    - glibc `free` calls `sbrk` when the free block at the top end is sufficiently large.

## Memory Allocation Rules
- Always check if memory allocation succeeded.
- Never touch any bytes outside the range of the allocated block of memory.
- Never free the same piece of allocated memory twice.
- Never free a pointer value that wasn't obtained by a call to the `malloc` family.
