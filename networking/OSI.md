# OSI Model

- The OSI (Open Systems Interconnection) model is a conceptual network model that catergorizes and standardizes network functions.

## Layer 7: Application Layer
- Offers network protocol interfaces for applications.
- Functions
    - Identifying communication partners.
    - Synchronizing communication.
- Protocols
    - HTTP/HTTPS

## Layer 6: Presentation Layer
- Translates application layer formats to network formats.
- Functions
    - Data encryption.
    - Translates multiple application layer formats.

## Layer 5: Session Layer
- Control sessions between communicating hosts.

## Layer 4: Transport Layer
- Provides host-to-host communication.
- Functions
    - Data segmentation.
- PDU: Segment

## Layer 3: Network Layer
- Provides connectivity between end hosts on different networks.
- Functions
    - Logical addressing (IP addresses).
    - Path selection between source and destination.
- Devices
    - Routers
- PDU: Packet 

## Layer 2: Data Link Layer
- Provides node-to-node connection.
- Functions
    - Define how data is formatted for transmission.
    - Detects and corrects physical layer errors.
- Devices
    - Switches
- PDU: Frame 

## Layer 1: Physical Layer
- Defines physical characteristics.
- Address
    - MAC Address
        - Devices are assigned a 6-byte globally unique physical address when it is made.
        - The first 3 bytes are for the ID of the company that makes the devices.
- PDU: Bit 
