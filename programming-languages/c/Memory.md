# Memory In C

## calloc()
- `calloc()` dynamically allocates multiple blocks of memory.
```c
void* calloc(size_t number_of_blocks, size_t size_of_each_block);
```
- Example
```c
int *array = (int *)calloc(array_size, sizeof(int));
```
- Memory allocated by `calloc` is initialized by 0.
