#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <dirent.h>
#include <string.h>

int main(){
    int fd;
    char buffer[100];
    DIR *dir;

    struct stat fileInfo;
    struct dirent *entry;

    printf("\n--- Creating and writing to a file ---\n");
    fd = open("Student.txt", O_CREAT | O_WRONLY, 0644);

    if(fd < 0){
        printf("\nFile creation failed");
        return 1;
    }

    char data[] = "Linux system call experiment.\n"
                "B.Sc Cyber Security Laboratory\n";
    
    write(fd, data, strlen(data));
    close(fd);
    printf("\nData written successfully.\n");

    printf("\n--- Reading from the file ---\n");
    fd = open("Student.txt", O_RDONLY);

    if(fd < 0){
        printf("\nFile creation failed");
        return 1;
    }

    int bytes = read(fd, buffer, strlen(buffer) - 1);
    buffer[bytes] = '\0';
    printf("%s\n", buffer);
    close(fd);

    printf("\n--- File Information ---\n");
    if(stat("Student.txt", &fileInfo) == 0){
        printf("\nFile Size: %ld bytes", fileInfo.st_size);
        printf("\nNumber of links: %ld ", fileInfo.st_nlink);
        printf("\nPermissions: %o", fileInfo.st_mode);
    } else {
        printf("\nUnable to get the file information.\n");
    }

    printf("\n--- Creating a directory ---\n");
    if(mkdir("TestDirectory", 0777) == 0){
        printf("\nDirectory created successfully.\n");
    } else {
        printf("\nDirectory may already exists.");
    }

    printf("\n--- Directory Operations ---\n");
    dir = opendir(".");

    if(dir == NULL){
        printf("\nCannot open directory.");
        return 1;
    } 

    while((entry = readdir(dir)) != NULL){
        printf("%s\n", entry->d_name);
    }

    printf("\nProgram completed successfully\n");
    return 0;
}