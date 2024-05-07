# Password Storage

## Security Checklist
- Stored passwords should be hashed using a strong hash function (Argon2, bcrypt, scrypt).
- The passwords should be salted (adding a random string before hashing).
- The passwords should be peppered (same as salting, but the random string is not stored in the database).
- Work factors (resources needed to compute) should be upgraded as time passes.

