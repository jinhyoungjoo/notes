# Data Storage & Retrival

## Index
- An index is used to efficiently find a value for a pariticular key in a databnase.
- Well-chosen indices speed up read queries but every index slows down writes.

## Log Structured Storage Engines
- A log is an append-only data file.

### Simple Append-Only Design
- A hash map is used to keep track of indices. Every key is mapped to the byte offset in the data file.
- The log is split into segments when it reaches a certain size to prevent running out of disk space.
- Segments are compacted and merged in the background.

- Additional Things To Consider
    - File Format: CSV is not efficient, a binary format is used.
    - Record Deletion: A tombstone database record is used to indicate a key is deleted.
    - Checksums are used to check for partially written files when doing crash recovery.
    - Snapshots of each segment's hash map is written on disk to prevent the cost of re-drawing the hash map.
    - Only one writer thread is used to provide concurrency.

- Advantages
    - Appending and segment merging is much faster than random access.
    - Concurrency and crash recovery is much simpler.
- Disadvantages
    - Hash table must fit in memory.
    - Range queries are not efficient.

### LSM-Tree (Log-Structured Merge Tree)
- Use a SSTable (Sorted String Table), where the sequence of key-value pairs are sorted by key.
- Writes are performed to a memtable, an in-memory balanced tree data structure.
- The memtable is written to an SSTable file if the memtable gets larget than a threshold.
- Reads are performed sequentially to a memtable, and disk segments.
- Compaction and merging is done in the background.
- Logs are used to handle database crash.

- Advantages
    - Merging segments is simple and efficient since every segment is sorted by key.
    - In-memory index for byte offsets can be sparse since keys are sorted and scanning over few kilobytes is fast.

## References
- Designing Data-Intensive Applications
