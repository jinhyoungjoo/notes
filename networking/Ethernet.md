# Ethernet (IEEE 802.3)

## Ethernet Frame
- Ethernet Header
    - Preamble
        - 7 bytes of alternating 1s and 0s.
        - Allows devices to synchronize their reciever clocks.
    - SFD (Start Frame Delimiter)
        - 1 byte (10101011).
        - Marks the beginning of the rest of the frame.
        - Preamble and SFD are usually not considered to be part of the Ethernet header.
    - Destination
        - 6 byte MAC (Media Access Control) address of the destination device.
    - Source
        - 6 byte MAC (Media Access Control) address of the source device.
    - Type (or Length)
        - 2 byte field of the length (if value if less than 1500) or type (if value if greater than 1536).
- Ethernet Payload
    - The minimum Ethernet frame size if 64 bytes, making the minimum payload size to be 46 bytes.
- Ethernet Trailer
    - FCS (Frame Check Sequence)
        - 4 bytes in length.
        - Detect corrupted data by running a CRC (Cyclic Redundancy Check) algorithm over the data.

## Ethernet LAN Switching
- MAC Address Table (Dynamic MAC Addresses)
    - When a device send a frame to a switch, the switch writes down the MAC address on a MAC address table.
- Unknown Unicast Frame (Flooding)
    - When the switch does not know where the destination device is located, it floods the frame to all devices.
- Known Unicast (Forwarding)
    - When the destination MAC address is present on the MAC address table, the switch forwards the frame to that device.

## ARP (Address Resolution Protocol)
- Used to discover the Layer 2 address (MAC address) of a known Layer 3 address (IP address).
- Messages
    - ARP Request: Broadcast Ethernet Frame
    - ARP Reply: Unicast Ethernet Frame
    
