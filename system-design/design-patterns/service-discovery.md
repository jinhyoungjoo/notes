# Service Discovery

- When services try to communicate with each other, they must know where the service is located at.
- Modern cloud-based infrastructure dynamically changes network information.
- With service discovery, an extra component is used to find where the service is located at.

## Service Discovery Options
1. Client-side Discovery
- Client is responsible for determining the network information.
- The client asks a service registry where information on available services is stored.
- The client uses a load‑balancing algorithm to select one of the available service instances and makes a request.

2. Server-side Discovery
- Client makes request to a server load balancer.
- Load balancer queries the server registry and selects one of the available service instances to make a request.

## Service Registration Options
1. Self-Registration
2. Third-Party Registration

## References
- https://www.nginx.com/blog/service-discovery-in-a-microservices-architecture
