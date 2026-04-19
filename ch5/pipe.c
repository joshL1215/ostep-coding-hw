#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>

int main(void) {
    int fd[2];
    pipe(fd);

    pid_t pid1 = fork();
    if (pid1 == 0) {
        dup2(fd[1], STDOUT_FILENO);
        close(fd[0]);
        close(fd[1]);
        
        execlp("ls", "ls", NULL);
    }

    pid_t pid2 = fork();
    if (pid2 == 0) {
        dup2(fd[0], STDIN_FILENO);
        close(fd[0]);
        close(fd[1]);

        execlp("grep", "grep", ".c", NULL);
    }

    close(fd[0]);
    close(fd[1]);
    
    wait(0);
    wait(0);

    return 0;
}
