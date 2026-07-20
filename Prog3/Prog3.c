#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <dirent.h>
#include <string.h>

int main(){
    int fd;
    char buffer[100];

    struct  stat fileInfo;

    DIR *dir;
    struct dirent *entry;

    /*
        Part 1: Create and write data into a file using open() and write() system calls.
    */

    printf("\n--- Creating and Writing File ---\n");

    fd = open("student.txt", O_CREAT | O_WRONLY, 0644);

    if(fd < 0){
        printf("File Creation failed\n");
        return 1;
    }

    char data[] = "Linux System Calls Experiment\n"
                    "B.Sc Cyber Security Laboratory";

    write(fd, data, strlen(data));

    close(fd);

    printf("Data written Successfully\n");

    /* ===================================================================== */

    /*
        Part 2: Read data from the file using open() and read() system calls.
    */

    printf("\n--- Reading File Content ---\n");

    fd = open("student.txt", O_RDONLY);

    if(fd < 0){
        printf("File Opening failed\n");
        return 1;
    }

    int bytes = read(fd, buffer, sizeof(buffer) - 1);

    buffer[bytes] = '\0'; // Null-terminate the string

    printf("File Content:\n%s\n", buffer);

    close(fd);
    
    /* ===================================================================== */

    /*
        Part 3: Get file information using stat() system call.
    */

    printf("\n--- Getting File Information ---\n");

    if(stat("student.txt", &fileInfo) < 0){
        printf("Failed to get file information\n");
        return 1;
    } else {
        
        printf("File Size: %ld bytes\n", fileInfo.st_size);
        printf("File Permissions: %o\n", fileInfo.st_mode & 0777);
        printf("Number of Links: %ld\n", fileInfo.st_nlink);
    }

    /* ===================================================================== */

    /*
        Part 4: Create directory using mkdir() system call.
    */

    printf("\n--- Creating Directory ---\n");

    if(mkdir("TextDirectory", 0755) < 0){
        printf("Directory Creation failed\n");
        return 1;
    } else {
        printf("Directory Created Successfully\n");
    }

    /* ===================================================================== */

    /*
        Part 5: List files in the directory using opendir() and readdir() system calls.
    */

    printf("\n--- Listing Files in Directory ---\n");

    dir = opendir(".");

    if(dir == NULL){
        printf("Failed to open directory\n");
        return 1;
    }

    while((entry = readdir(dir)) != NULL){
        printf("%s\n", entry->d_name);
    }

    closedir(dir);

    printf("\n--- Program Completed Successfully ---\n");

    return 0;
}