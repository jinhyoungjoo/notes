# Memory

## Memory Management Models
- No Memory Abstraction
    - All processes share one single memory model, the physical memory itself.
    - The OS is placed either on the RAM (Random Access Memory) or ROM (Read-Only Memory).
    - Running multiple programs is possible.
        1. Swap the entire physical memory into a non-volatile storage.
        2. Split the memory into blocks that have their own protection keys (IBM 360).
            - Deny access to memory if the target block has a different protection key than the current key. 
            - Apply static relocation to fix memory access problems.

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
