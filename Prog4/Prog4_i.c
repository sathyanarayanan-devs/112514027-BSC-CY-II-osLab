#include <stdio.h>
#include <unistd.h>

int main(){
    __pid_t pid;

    printf("Program execution started\n");

    /*
        fork() creates a new process

        Return value:
            > 0 : Executing in parent process (value is child PID)
            = 0 : Executing in child procss
            < 0 : Process creation failed
    */

    pid = fork();

    //Check whether process creation failed

    if(pid < 0){
        printf("Process creation failed\n");
        return 1;
    }

    /*
        Child process block
        pid value will be 0 inside child process
    */

   else if(pid == 0){
    printf("\n--- Child Process ---\n");

    //Displays child's own PID
    printf("Child Process ID: %d\n", getpid());

    //Displays parent's PID
    printf("Parent Process ID: %d\n", getppid());
   }

   /*
        Parent process block
        pid value will be > 0 inside parent process
    */

   else{
    printf("\n--- Parent Process ---\n");

    //Displays parent's own PID
    printf("Parent Process ID: %d\n", getpid());

    //Displays child's PID
    printf("Child Process ID: %d\n", pid);
   }
   
   printf("\nProgram execution completed\n");

   return 0;
}