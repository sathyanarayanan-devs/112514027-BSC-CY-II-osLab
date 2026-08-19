#include <stdio.h>
#include <signal.h>
#include <unistd.h>

//Signal handler
void handler(int signal_number){
    printf("\nSignal received successfully.\n");
    printf("Signal Number: %d\n", signal_number);
}

int main(){
    //Register SIGINT handler
    signal(SIGINT, handler);

    printf("Current Process ID: %d\n", getpid());

    printf("\nGenerating SIGINT using raise()\n");

    //raise sends SIGINT to the same process
    raise(SIGINT);

    printf("\nProgram Completed successfully.\n");

    return 0;
}