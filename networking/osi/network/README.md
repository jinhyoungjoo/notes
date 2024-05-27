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

## Router
- A network router consists of four parts.
    - Input Port
        - Looks up a destination IP address and send the packet into the switching fabric to the specified output port.
        - Looking up the forwarding table happens here, and the longest prefix matching rule is used here.
    - Switching Fabric
    - Output Port
    - Routing Processor
        - The software process that works in the control plane.

