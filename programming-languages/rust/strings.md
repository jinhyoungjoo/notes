# Rust Strings

- Rust strings are composed of valid UTF-8 characters.
- Rust strings have no null termination, and the length is stored explicitly.

## String Type
- Heap-allocated, growable UTF-8 string.
- Owned type
- Size, Capacity, Length
- Useful for creating/modifing strings.

## String Slices (&str)
- Pointer to a string with a length.
- Borrow type
- Can point to any string, anywhere (stack, heap, data).
- Useful for reading/analyzing strings with no modification.
