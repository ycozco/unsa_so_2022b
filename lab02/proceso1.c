//CREAR ARCHIVO procesol. c
#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

int main(void) 
{ 
    pid_t pid;
    /*x fork a child process */
    pid = fork();
    if (pid < 0) { /* error occurred */
        fprintf(stderr, "Fork Failed") ;
        return 1; }
    else if (pid == 0) { /*x child process */
        execlp("/bin/ls", "ls", NULL);
    }    
    else { /* parent process */
        /* parent will wait for the child to complete */
        //wait (NULL);
        printf("Child Complete");
    }
    return 0;
}