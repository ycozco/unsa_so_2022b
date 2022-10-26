#include <sys/types.h>
#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>

int main(void)
{
    pid_t pid;
    /* fork a child process */
    pid = fork();
    if (pid < 0) { /* error occurred */
        fprintf(stderr, "Fork Failed");
        return 1;
    }
    else if (pid == 0) { /* child process */
        execlp("/bin/ls", "ls", NULL);
    }
    else { /* parent process */
        /* parent will wait for the child to complete */
        wait(NULL);
        printf("Child Complete \n");
    }
    return 0;
}
/** En el siguiente código, detalle que parte del código es ejecutada por el proceso padre y que
porción del código es ejecutada por el proceso hijo. Describa la actividad de cada uno.
 * 
 * 
 *   **/