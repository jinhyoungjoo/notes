# String Handling In C

## Input Functions
- `fgets`
    - Returns NULL on failure, and the original pointer on success.
    - `gets` is insecure due to buffer overflow attacks. Always use `fgets`.
    ```c
    char *fgets(char *string, int size, FILE *stream);
    ```

