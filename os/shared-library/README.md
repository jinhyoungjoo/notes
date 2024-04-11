# Shared Library

- A shared library is a single object file that can be used by other programs.
- On Linux, this is represented by a .so file (ELF shared object).
- For Linux, `libc` is a common example of a shared library.

## Shared Library Advantages
- Disk Space Preservation
- RAM Preservation
- Ease of Maintainence

## How to Make a Shared Library
1. Create the shared object file.
```bash
gcc -o libmath.so -fpic -shared math.c
```

- `fpic`: Generate position-independent code.

2. Link the shared object file.
```bash
gcc -o main -lmath -L. main.c
```

## Useful Commands
- `ldd`: List dynamic dependencies.
    - `otool -L` for OSX
- `nm`: List set of symbols within object file.
