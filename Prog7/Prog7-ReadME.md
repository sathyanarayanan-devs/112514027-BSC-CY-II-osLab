# Program 7: Inter-Process Communication Using Shared Memory in C

## Aim

To demonstrate inter-process communication between a parent process and a child process using POSIX shared memory.

## Description

This program demonstrates the use of shared memory for communication between processes in C.

The program creates a shared memory object, maps it into the process address space, and then creates a child process using `fork()`.

The operations performed are:

- `shm_open()` – Creates and opens a shared memory object.
- `ftruncate()` – Sets the size of the shared memory object.
- `mmap()` – Maps the shared memory into the process address space.
- `fork()` – Creates a child process.
- `sprintf()` – Writes messages into the shared memory.
- `wait()` – Waits for the child process to complete.
- `munmap()` – Unmaps the shared memory from the process.
- `close()` – Closes the shared memory file descriptor.
- `shm_unlink()` – Removes the shared memory object.

## Source Code

**File**: [prog7.c](https://github.com/sathyanarayanan-devs/112514027-BSC-CY-II-OSLAB/Prog7/prog7.c)

## Compilation

```bash
gcc prog7.c -o prog7.exe
```

## Execution

```bash
./prog7.exe
```

## Sample Output

![Sample Output](image.png)

## Shared Memory Details

| Function | Purpose |
|---------|---------|
| `shm_open()` | Create or open a shared memory object |
| `ftruncate()` | Set the size of shared memory |
| `mmap()` | Map shared memory into the process address space |
| `fork()` | Create a child process |
| `sprintf()` | Write data into shared memory |
| `wait()` | Wait for the child process |
| `munmap()` | Unmap shared memory |
| `close()` | Close the shared memory descriptor |
| `shm_unlink()` | Remove the shared memory object |

## Header Files Used

| Header File | Purpose |
|---------|---------|
| `<stdio.h>` | Standard input and output functions |
| `<stdlib.h>` | Standard library functions |
| `<string.h>` | String handling functions |
| `<fcntl.h>` | File control options |
| `<sys/mman.h>` | Shared memory and memory mapping functions |
| `<sys/wait.h>` | Process waiting functions |
| `<sys/unistd.h>` | POSIX system calls |
| `<sys/types.h>` | System data types |

## Result

The program successfully demonstrated inter-process communication using POSIX shared memory, where a shared memory region is created and accessed by the parent and child processes.