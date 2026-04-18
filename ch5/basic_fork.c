#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void) { 
    int x = 100;

    pid_t pid = fork();

    if (pid == 0) {
        printf("child: x = %d\n", x);
        x = 50;
        printf("child: x = %d\n", x);
    }
    else {
        wait(0);
        printf("parent: x = %d\n", x);
        x = 25;
        printf("parent: x = %d\n", x);
    }
    


    return 0;
}
