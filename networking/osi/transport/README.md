# Transport Layer (OSI Layer 4)

- The fundamental responsibility of the transport layer is to extend the network layer's host-to-host connection service to process-to-process delivery.
- They provide logical communication between application processes running on different hosts.
- Transport layer protocols live in the end system, meaning that it does not know anything about host-to-host connections.
- Although transport layer protocols are limited by the network layer protocols' ability, it can provide extra functionality such as reliability and security.

## Transport Layer Services
- Reliable Data Transfer
- Throughput
- Timing
- Security

## Features
### Multiplexing & Demultiplexing
- Definition
    - A process can have one or more sockets (gateway for data in a process).
    - The job of delivering data in the transport layer to the correct socket is called demultiplexing.
    - The job of gathering data, encapsulating them into segments, and passing the segments to the network layer is called multiplexing.
- UDP Multiplexing
    - A UDP socket is identified by the destination IP address and the destination port number.
- TCP Multiplexing
    - A TCP socket is identified by the destination IP address, destination port number, source IP address, and source port number.
    - A web server opens a new process (or thread) to handle each connection between the socket and process.

### Integrity Checking (TCP & UDP)
### Reliable Data Transfer (TCP)
### Congestion Control (TCP)

## PDU 
- Segments are the PDU of the transport layer.
- The application layer messages are split into smaller chunks where the transport layer header is attached.

