#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>

int main(void) {
    pid_t pid = fork();

    if (pid == 0) {
        close(STDOUT_FILENO);
        printf("attempting to printf to stdout\n");
    }

    wait(0);
    return 0;
}
