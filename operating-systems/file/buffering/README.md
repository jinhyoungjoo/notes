# File I/O Buffering

- I/O system calls buffer data when operating on disk files.

## Buffer Cache
- `read` and `write` system calls do not directly initiate disk access.
- They copy data between a user-space buffer and a kernel buffer cache.
- The kernel asynchronously writes its buffer on to the disk.
- If other processes access the file, the kernel returns the buffer cache data.

## Buffer Size and I/O Performance
- Buffering data in large blocks reduce the number of system calls, improving I/O performance.
- When the buffer size get big enough, the cost of system calls is much smaller than the cost of disk I/O, therefore making no performance increase.
- The majority of the time required for large buffer size disk I/O is used on disk reads.

## `stdio` Library
- `read` and `write` implementations are platform dependent.
- `stdio` library functions for I/O relives us of the task of buffering data.
- Functions
    - Setting the buffering mode of a `stdio` stream
        - `setvbuf()`, `setbuf()`, `setbuffer()`
    - Flushing a `stdio` buffer
        - `fflush()`
