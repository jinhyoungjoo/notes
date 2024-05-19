# I/O

## I/O Devices
- Categories of I/O Devices
    - Block Device
        - Stored information is in fixed-size blocks.
        - Possible to read/write on any place on the device independently.
        - Hard disks, SSDs.
    - Character Device
        - Delivers or accepts a stream of characters.
        - Not addressable.
        - Printers, network interfaces.

## Device Controllers (Adapters)
- Takes on the form as a chip on the motherboard or a circuit card insertable into a PCIe expansion slot.

## Memory-Mapped I/O
- Each device controller has a few registers used for communicating with the CPU.
- Many devices have a data buffer the OS can read and write.

- A CPU can communicate with the control registers and device data buffer in one of the following ways.
    - Each control register is assigned an I/O port number.
        - Early computers used this method.
        - The I/O ports are separate from the memory address space
        - Specific instructions are included to use the I/O ports (`IN $REG,$PORT`, `OUT $REG,$PORT`).

    - Memory-mapped I/O: Each control register is assigned a unique memory address.
        - Device control registers can be treated in the same way as actual memory. No additional instructions or special protection mechanism is needed.
        - Hardware needs to selectively disable caching since caching a device control register is bad.
        - Modern computers have multiple buses for performance (e.g. memory bus), and I/O devices have no way of responding to a memory bus.
            - Possible Solutions
                1. If the memory fails to respond, make the CPU try other buses (Adds additional hardware complexity).
                2. Put a snooping device on the memory bus to pass all addresses presented to I/O devices (I/O devices may not process requests at the speed of memory).
                3. Filter addresses in the memory controller (Need to figure out which memory addresses are not memory addresses at boot time).

    - Hybrid method: Memory-Mapped data buffers and separate I/O ports for control registers.
