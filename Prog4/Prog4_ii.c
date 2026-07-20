#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
    pid_t pid;

    //Create a child process

    pid = fork();

    //Check whether process creation failed
    if(pid < 0){
        printf("Error in creating child process\n");
        return 1;
    }

    /*
        Child process
        pid = 0 indicates child execution
    */

    else if(pid == 0){
        printf("\n--- Child Process ---\n");
        printf("Child Process ID: %d\n", getpid());

        //Simulate some processing time

        sleep(3);

        printf("Child Process Completed\n");
    }

    /*
        Parent process
        pid > 0 indicates parent execution
    */

    else{
        printf("\n--- Parent Process ---\n");
        printf("Parent is waiting for child process to complete\n");

        wait(NULL);
        
        printf("Child process completed\n");

        printf("Parent PID: %d\n", getpid());

        printf("Parent process Resumed\n");
    }
    
    return 0;
}