# OPERATING SYSTEM LAB

This repository contains programs implemented as part of the **Operating System Laboratory**.

The programs cover fundamental Operating System concepts including Linux commands, shell scripting, file and directory operations, process management, signals, inter-process communication, CPU scheduling, memory management, and Linux file information.

---

## PROGRAM OVERVIEW

| Program No. | Program Title | Aim of Program |
|---|---|---|
| 1 | [BASIC LINUX COMMANDS](https://github.com/sathyanarayanan-devs/112514027-BSC-CY-II-osLab/blob/112514027-BSC-OSLAB-CY-II/ex01/README.md) | To familiarize students with basic Linux commands for file, directory, and system management, compare them with equivalent DOS commands, and execute them in a Linux environment. |
| 2 | [SHELL SCRIPTING AND COMMAND-LINE ARGUMENTS](https://github.com/sathyanarayanan-devs/112514027-BSC-CY-II-osLab/blob/112514027-BSC-OSLAB-CY-II/ex02/README.md) | To develop shell scripts for performing basic arithmetic, file handling, decision making, loops, and command-line argument processing using the Bash shell. |
| 3 | [LINUX FILE AND DIRECTORY OPERATIONS USING C SYSTEM CALLS](https://github.com/sathyanarayanan-devs/112514027-BSC-CY-II-osLab/blob/112514027-BSC-OSLAB-CY-II/ex03/README.md) | To implement basic file and directory operations using Linux system calls such as `open()`, `read()`, `write()`, `close()`, `stat()`, `mkdir()`, `opendir()`, and `readdir()`. |
| 4 | [PROCESS CREATION AND MANAGEMENT USING LINUX SYSTEM CALLS](https://github.com/sathyanarayanan-devs/112514027-BSC-CY-II-osLab/blob/112514027-BSC-OSLAB-CY-II/ex04/README.md) | To study process creation, execution, and synchronization using Linux process system calls and understand parent-child process relationships. |
| 5 | [SIGNAL HANDLING IN LINUX](https://github.com/sathyanarayanan-devs/112514027-BSC-CY-II-osLab/blob/112514027-BSC-OSLAB-CY-II/ex05/README.md) | To demonstrate inter-process communication using Linux signals and study signal generation, handling, and process synchronization. |
| 6 | [INTER-PROCESS COMMUNICATION USING PIPES AND FIFO](https://github.com/sathyanarayanan-devs/112514027-BSC-CY-II-osLab/blob/112514027-BSC-OSLAB-CY-II/ex06/README.md) | To implement inter-process communication using unnamed pipes and named pipes/FIFO and exchange data between processes. |
| 7 | [INTER-PROCESS COMMUNICATION USING SHARED MEMORY](https://github.com/sathyanarayanan-devs/112514027-BSC-CY-II-osLab/blob/112514027-BSC-OSLAB-CY-II/ex07/README.md) | To demonstrate inter-process communication using shared memory segments and implement operations to create, access, modify, and release shared memory resources. |
| 8 | [CPU SCHEDULING ALGORITHMS](https://github.com/sathyanarayanan-devs/112514027-BSC-CY-II-osLab/blob/112514027-BSC-OSLAB-CY-II/ex08/README.md) | To simulate CPU scheduling algorithms and compare their performance using measures such as waiting time and turnaround time. |
| 9 | [MEMORY MANAGEMENT – PAGE REPLACEMENT ALGORITHMS](https://github.com/sathyanarayanan-devs/112514027-BSC-CY-II-osLab/blob/112514027-BSC-OSLAB-CY-II/ex09/README.md) | To simulate page replacement algorithms such as FIFO, LRU, and Optimal. |
| 10 | [LINUX FILE PERMISSIONS AND FILE INFORMATION](https://github.com/sathyanarayanan-devs/112514027-BSC-CY-II-osLab/blob/112514027-BSC-OSLAB-CY-II/ex10/README.md) | To study Linux file permissions and retrieve file metadata using `stat()` and related system calls. |

---

## FOLDER STRUCTURE

```text
112514027-BSC-CY-II-osLab/
│
├── .devcontainer/
│   └── devcontainer.json
│
├── Lab internal Test-1/
│   ├── Archive/
│   ├── MenuDrive.sh
│   ├── ZipOp.exe
│   ├── ZipOperation.c
│   ├── archive.tar.gz
│   └── archive.zip
│
├── ex01/
│   ├── README.md
│   ├── ex01.c
│   └── image.png
│
├── ex02/
│   ├── Demo/
│   ├── README.md
│   ├── ex02.sh
│   ├── files.txt
│   └── image.png
│
├── ex03/
│   ├── README.md
│   ├── Student.txt
│   ├── ex03.c
│   └── image.png
│
├── ex04/
│   ├── README.md
│   ├── ex04_i.c
│   ├── ex04_ii.c
│   ├── image_1.png
│   └── image_2.png
│
├── ex05/
│   ├── README.md
│   ├── ex05.c
│   └── image.png
│
├── ex06/
│   ├── README.md
│   ├── ex06.c
│   └── image.png
│
├── ex07/
│   ├── README.md
│   ├── ex07.c
│   └── image.png
│
├── ex08/
│   ├── README.md
│   ├── ex08.c
│   └── image.png
│
├── ex09/
│   ├── README.md
│   ├── ex09.c
│   └── image.png
│
├── ex10/
│   ├── README.md
│   ├── ex10.c
│   ├── image.png
│   └── test.txt
│
├── README.md
│
└── osSyllabus-1.pdf
```

---

## REPOSITORY CONTENTS

| Folder / File | Description |
|---|---|
| `.devcontainer/` | Development container configuration for the repository. |
| `Lab internal Test-1/` | Programs and files related to the Operating System Laboratory Internal Test-1. |
| `ex01/` | Basic Linux terminal commands using C and the `system()` function. |
| `ex02/` | Shell scripting with command-line arguments, file checking, directory checking, and line counting. |
| `ex03/` | Linux file and directory operations using C system calls. |
| `ex04/` | Process creation and process synchronization using `fork()` and `wait()`. |
| `ex05/` | Signal handling using `signal()`, `SIGINT`, and `raise()`. |
| `ex06/` | Inter-process communication using an unnamed pipe. |
| `ex07/` | Inter-process communication using POSIX shared memory. |
| `ex08/` | First Come First Serve (FCFS) CPU scheduling. |
| `ex09/` | FIFO page replacement algorithm. |
| `ex10/` | File information retrieval using `stat()` and related functions. |
| `README.md` | Main repository documentation and program overview. |
| `osSyllabus-1.pdf` | Operating System Laboratory syllabus. |

---

## OUTPUT IMAGES

Each practical exercise contains its corresponding **sample output image** for reference.

| Program | Output Image |
|---|---|
| Program 1 | `ex01/image.png` |
| Program 2 | `ex02/image.png` |
| Program 3 | `ex03/image.png` |
| Program 4 | `ex04/image_1.png`, `ex04/image_2.png` |
| Program 5 | `ex05/image.png` |
| Program 6 | `ex06/image.png` |
| Program 7 | `ex07/image.png` |
| Program 8 | `ex08/image.png` |
| Program 9 | `ex09/image.png` |
| Program 10 | `ex10/image.png` |

---

## LAB INTERNAL TEST

The `Lab internal Test-1` folder contains additional files and programs used for the Operating System Laboratory Internal Test.

The folder includes:

- `MenuDrive.sh` – Shell script.
- `ZipOperation.c` – C program related to ZIP operations.
- `ZipOp.exe` – Executable file.
- `archive.zip` – ZIP archive.
- `archive.tar.gz` – TAR.GZ archive.
- `Archive/` – Archive-related directory.

---

## TECHNOLOGIES AND CONCEPTS

The programs in this repository use:

- C Programming
- Bash Shell Scripting
- Linux System Calls
- Process Management
- Signal Handling
- Inter-Process Communication
- Pipes
- Shared Memory
- CPU Scheduling
- Memory Management
- Page Replacement
- Linux File Management
- File Metadata and Permissions

---

## RESULT

The Operating System Laboratory programs were successfully implemented and organized into individual exercise folders along with their source code, documentation, supporting files, and sample output images.