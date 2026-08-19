#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main() {
    int fd[2];
    __pid_t pid;

    //Create pipe
    if(pipe(fd) == -1) {
        printf("Pipe creation failed\n");
        return 1;
    }

    //Create a child process
    pid = fork();

    if(pid < 0){
        printf("Process creation failed\n");
        return 1;
    } else if (pid == 0) { //child process
        close(fd[1]); // Close the write end of the pipe

        char buffer[100];
        read(fd[0], buffer, sizeof(buffer)); // Read from the pipe
        printf("Child received: %s\n", buffer);

        close(fd[0]); // Close the read end of the pipe
    } else { //parent process
        close(fd[0]); // Close the read end of the pipe

        const char *message = "Hello from parent!";
        write(fd[1], message, strlen(message) + 1); // Write to the pipe

        close(fd[1]); // Close the write end of the pipe
    }

    return 0;
}