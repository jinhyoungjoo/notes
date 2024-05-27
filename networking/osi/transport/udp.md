# UDP (User Datagram Protocol)

## Advantages of UDP
- Finer application-level control of data (less interference in transport layer)
- Connectionless (reduces overhead)
- No connection state
- Small packet header overhead

## Disadvantages of UDP
- Lack of congestion control in UDP may result in high loss rates and crowding out TCP sessions.

## UDP Header
- Header Fields
    - Source/Destination Port Numbers (2 bytes)
    - Length (2 bytes)
    - Checksum (2 bytes)
        - 1's complment of the sum of all 16-bit words in the segment.
