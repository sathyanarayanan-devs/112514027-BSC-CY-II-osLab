#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("\nLinux Directory Structure\n\n");

    printf("Root Directory (/): \n");
    system("ls /");

    printf("\nHome Directory (/home): \n");
    system("ls /home");

    printf("\nETC Directory (/etc): \n");
    system("ls /etc");

    printf("\nUSR Directory (/etc): \n");
    system("ls /usr");

    printf("\nVAR Directory (/var): \n");
    system("ls /var");

    return 0;
}