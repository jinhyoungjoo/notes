# Garbage Collection

## GC Algorithms
- Reference Counting
    - Each object has an internal counter of memory references and is deleted when the counter hits 0.
    - When circular memory references happen, the objects can never be freed.
- Mark and Sweep
    - Periodically stop the program and mark each element that is unaccessible.
    - Stopping the program and checking every single variable is inefficient.
