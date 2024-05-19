# Network Layer

- The primary role of the network layer is to move packets from one host to another host.

## Network Layer Functionalities
- Forwarding (Data Plane)
    - Router-local action of transferring a packet from an input link interface to a output link interface.

    - Forwarding Table (Control Plane)
        - A router forwards a packet by examining the packets's header and use the header values to index into the forwarding table.
        - The forwarding table may be determined by a routing algorithm or via a remote controller (SDN, software-defined networking).

- Routing (Control Plane)
    - Network-wide process of determining the end-to-end path a packet takes from source to destination.

