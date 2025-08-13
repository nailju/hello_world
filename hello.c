#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    printf("================================================================\n");
    printf("    Hello world!\n");
    printf("================================================================\n");

    // start
    printf("Main process: PID = %d, PPID = %d\n", getpid(), getppid());

    // Now call execl() function to replace the code image of the current process with that of 'ls'
    printf("Now I will call execl()...\n\n");
    execl("/bin/ls", "ls", "-alF", NULL);

    printf("\n"); // This line will never be shown since the code image of this process was already replaced with that of 'ls'
}
