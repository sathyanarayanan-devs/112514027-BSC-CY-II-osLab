#include <stdio.h>
#include <unistd.h>

int main(){
    __pid_t pid;
    printf("\nProgram execution Started\n");

    pid = fork();

    if(pid < 0){
        printf("\nFailed creation of Child process\n");
        return 1;
    } else if (pid == 0){
        printf("\n----- Child Process -----\n");
        printf("\nChild Process Id: %d", getpid());
        printf("\nParent Process Id: %d", getppid());
        printf("\n-------------------------\n");
    } else {
        printf("\n----- Parent Process -----\n");
        printf("\nParent Process ID: %d", getpid());
        printf("\nChlid Process ID: %d", pid);
        printf("\n---------------------------\n");
    }

    printf("\nProgram completed successfully\n");
    return 0;
}