# CORS (Cross Origin Resource Sharing)

## Preflight
- Browsers send a preflight request to a server to check if they have permission to perform that action.
- Preflight requests are sent by the `OPTIONS` method.
- A server should have handlers for `OPTIONS` requests in order to process these requests.

## Headers
### Response Headers
- Access Control Allow Origin
    - In the response header, set the 'Access-Control-Allow-Origin' to the allowed origins.
    - If this value is not set, an error will occur (`No 'Access-Control-Allow-Origin' header is present on the requested resource`).
    - If this value is set but the origin is different from the value, an error will occur (`The 'Access-Control-Allow-Origin' header has a value that is not equal to the supplied origin.`).

- Access Control Allow Headers
    - In the response header, set the 'Access-Control-Allow-Headers' to allowed headers.
    - This response header will be set in the preflight response.
    - If this value is set but a header is not allowed, an error will occur (`Request header field is not allowed by 'Access-Control-Allow-Headers' in preflight response.`).

