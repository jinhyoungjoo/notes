# Transport Layer (OSI Layer 4)

- The fundamental responsibility of the transport layer is to extend the network layer's host-to-host connection service to process-to-process delivery.
- They provide logical communication between application processes running on different hosts.
- Transport layer protocols live in the end system, meaning that it does not know anything about host-to-host connections.
- Although transport layer protocols are limited by the network layer protocols' ability, it can provide extra functionality such as reliability and security.

## Features
- Transport-Layer Multiplexing (TCP & UDP)
- Integrity Checking (TCP & UDP)
- Reliable Data Transfer (TCP)
- Congestion Control (TCP)

## PDU 
- Segments are the PDU of the transport layer.
- The application layer messages are split into smaller chunks where the transport layer header is attached.

