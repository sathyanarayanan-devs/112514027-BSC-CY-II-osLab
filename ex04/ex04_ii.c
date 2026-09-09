#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>
 
int main(){
    __pid_t pid;
    printf("\nProgram execution started...\n");

    pid = fork();

    if(pid < 0){
        printf("\nFailed to create Child process\n");
        return 1;
    } else if (pid == 0){
        printf("\n----- Child Process -----\n");
        printf("\nChild Process ID: %d", getpid());

        sleep(3);
        
        printf("\nChild Process Completed...");
        printf("\n-------------------------\n");
    } else {
        printf("\n----- Parent Process -----\n");
        printf("Parent process is waiting for the child process to complete..\n");

        wait(NULL);

        printf("\nParent Process ID: %d", getpid());
        printf("\nParent process is resumed...\n");
    }
    return 0;
}