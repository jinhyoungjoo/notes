# Microservices Pattern

## Authorization
- Method 1: Each service has its own auth related data. Services that need the data asks other services directly.
- Method 2: A gateway proxies requests to other services while handling authentication and authorization.
- Method 3: All auth services are centralized. Services ask the auth service for related data.

## References
- https://www.osohq.com/post/microservices-authorization-patterns
