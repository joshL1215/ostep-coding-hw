#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <fcntl.h>  // for open()
#include <string.h>

int main(void) { 
    int fd = open("file_desc_fork_log.txt", O_WRONLY);

    pid_t pid = fork();
    if (pid == 0) {
        const char *msg = "this is from the child\n";
        write(fd, msg, strlen(msg));
    }

    else {
        const char *msg = "this is from the parent\n";
        write(fd, msg, strlen(msg));
    }

    return 0;
}
