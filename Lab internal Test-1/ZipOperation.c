#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("\nCompressing and Archiving Operations..\n\n");

    printf("\nCreating a directory..\n");
    system("mkdir Archive");

    printf("\nCreating a new file inside the directory...\n");
    system("touch Archive/test.txt");

    printf("\nCreating a tar archive file...\n");
    system("tar -cvf archive.tar Archive");

    printf("\nCompressing the archive file...\n");
    system("gzip archive.tar");

    printf("\nCompressing the file..,.\n");
    system("zip -r archive.zip Archive");

    printf("\nExtracting the files from zip..\n");
    system("unzip archive.zip");

    return 0;
}