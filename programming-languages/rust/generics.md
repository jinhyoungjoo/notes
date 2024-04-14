# Rust Generics

## Function Generics
```rust
fn largest<T>(list: &[T]) -> T {
    let mut largest = list[0];

    for &item in list.iter() {
        if item > largest {
            largest = item;
        }
    }

    largest
}
```

## Structure Generics
```rust
struct Point<T> {
    x: T,
    y: T
}
```

## References
- https://doc.rust-lang.org/book/ch10-01-syntax.html
