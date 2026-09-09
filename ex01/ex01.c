#include <stdio.h>
#include <stdlib.h>
int main() {
    printf("\nCurrent working directory...\n");
    system("pwd");

    printf("\nList of files in the current directory...\n");
    system("ls -l");

    printf("\nCreate a new directory named 'Demo'...\n");
    system("mkdir Demo");

    printf("\nList of files in the current directory...\n");
    system("ls -l");

    printf("\nRemove the 'Demo' directory...\n");
    system("rmdir Demo");

    return 0;
}