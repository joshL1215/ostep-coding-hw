#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void) { 
    pid_t pid = fork();

    int wait_val = wait(0);
    if (pid == 0) {
        printf("hello, and also %d is the value of wait() from child\n", wait_val);
    }
    else {
        int wait_val = wait(0);
        printf("goodbye, and also %d, and pid of child is %d\n", wait_val, pid);
    }

    return 0;
}
