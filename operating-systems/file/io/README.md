# File I/O

## File Descriptors
- A file descriptor is a non-negative integer that can refer to an open file by the kernel.
- Conventional File Descriptors (`unistd.h`)
    - `STDIN_FILENO` (0): stdin
    - `STDOUT_FILENO` (1): stdour
    - `STDERR_FILENO` (2): stderr

## Opening Files
- Functions
    - `open` and `openat` both returns the file descriptor if OK and -1 on error.
    - Flags are chained by ORing. Manual pages are located in `man 2 open`.
    ```c
    #include <fcntl.h>
    
    int open(const chat *path, int oflag, ... /* mode_t mode */);
    int openat(int fd, const chat *path, int oflag, ... /* mode_t mode */);
    ```
- Openat
    - There are three possibilities when using the openat function.
        - (path is an absolute path) fd is ignored, openat behaves like open.
        - (path is relative, fd is a file descriptor) Path is evaluated relative to the open file referred by fd.
        - (path is relative, fd is `AT_FDCWD`) Path is evaluated relative to the current working directory.
    - This function helps with
        - being able to use relative paths relative to directories other than the current working directory.
        - providing a way to avoid TOCTTOU errors.
            - Since openat acts relative to the open file descriptor, it will operate relative to the file descriptor even if the file is modified.
