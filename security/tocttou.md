# TOCTTOU (Time Of Check To Time Of Use)

- Race condition where changes are made to a system between checking a condition and using the results of that check.

## Example
```c
if(!is_file_write_ok("file")) exit(1);

/* Attacker Process Start */
symlink("/etc/passwd", "file");
/* Attacker Process End */

int fd = open("file", O_WRONLY);
write(fd, buffer, sizeof(buffer));
```

