#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void) { 
    pid_t pid = fork();

    if (pid == 0) {
        printf("hello");
    }
    else {
        int status;
        pid_t wait_val = waitpid(pid, &status, 0);
        printf("goodbye, and also %d, and pid of child is %d\n", wait_val, pid);
        printf("also status: %d\n", status);
    }

    return 0;
}
