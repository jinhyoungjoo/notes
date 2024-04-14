# JWT (JSON Web Token)

- JWT is an open standard that defines secure information transfer via JSON objects.
- JWT has a relatively small size compared to other tokens, making it possiblle for fast information transfer.

## Structure
- JWTs have the structure of base64encode(HEADER).base64encode(PAYLOAD).$SIGNATURE.
    - Header: Type (JWT) + Signing Algorithm (HMAC SHA256 or RSA).
    ```json
    {
        "alg": "HS256",
        "typ": "JWT"
    }
    ```

    - Payload: Claims data.
    ```json
    {
        "sub": "12234567890",
        "name": "Bob",
        "iat": 1516239022 // Issued at
    }
    ```

    - Signature: Signed version of the encoded header and payload, and a secret.
    ```js
    HMACSHA256(
        base64UrlEncode(header) + "." +
        base64UrlEncode(payload),
        MY_SECRET_KEY
    )
    ```

## Authorization
- Client sends stored JWT to server inside header (Authorization field).

## Things To Care About
- Tokens should have a reasonable expiry date for security purposes.
- JWT tokens should contain the minimal necessary information.
 

## References
- https://jwt.io/introduction
- https://auth0.com/docs/secure/tokens/json-web-tokens
- https://www.youtube.com/watch?v=7Q17ubqLfaM
