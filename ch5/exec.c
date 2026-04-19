#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void) { 
    pid_t pid = fork();
    if (pid == 0) {
        execl("/bin/ls", "ls", "-l", (char *)NULL);
    }
    
    wait(0);

    return 1;
}
