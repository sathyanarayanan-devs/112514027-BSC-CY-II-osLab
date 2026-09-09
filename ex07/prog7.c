#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <sys/wait.h>
#include <sys/unistd.h>
#include <sys/types.h>
int main() {

    //Name of the shared memory object
    const char *name = "/my_shm";
    //Size of the shared memory object
    const size_t SIZE = 4096;

    int shm_fd;
    void *ptr;

    shm_fd = shm_open(name, O_CREAT | O_RDWR, 0666);
    if (shm_fd == -1) {
        perror("shm_open failed");
        return 1;
    }

    if(ftruncate(shm_fd, SIZE) == -1) {
        perror("ftruncate failed");
        return 1;
    }

    ptr = mmap(0, SIZE, PROT_READ | PROT_WRITE, MAP_SHARED, shm_fd, 0);
    if (ptr == MAP_FAILED) {
        perror("mmap failed");
        return 1;
    }

    //fork a child process
    pid_t pid = fork();
    if (pid < 0) {
        perror("fork failed");
        return 1;
    } else if (pid == 0) { // Child process
        // Write to shared memory
        const char *message = "Hello from child!";
        sprintf(ptr, "%s", message);

        munmap(ptr, SIZE);
        close(shm_fd);
    } else {
        const char *message = "Hello from the Shared Memory!";
        sprintf(ptr, "%s", message);
        printf("Parent: Wrote data to shared memory: %s\n", message);

        wait(NULL);

        munmap(ptr, SIZE);
        close(shm_fd);
        shm_unlink(name);
    }

    return 0;
}