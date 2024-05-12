# Spring Boot Eureka Service Discovery

## Troubleshooting 
1. When using Docker, the hostname will be set to the Docker container ID by default.
- Solution: In the Eureka client's application configuration, set the following keys.
    ```yaml
    eureka:
        instance:
            preferIpAddress: true
            ipAddress: ${HOSTNAME}
    ```

