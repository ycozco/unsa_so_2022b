#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    printf("Proceso hijo PID = %d\n", getpid());
    printf("Proceso padre PPID = %d\n", getppid());
    exit(0);
}
//Analice el siguiente código y de una interpretación del resultado obtenido de
// acuerdo al marco teórico
// Language: c++
// Path: lab03/test02.c
/**  
 * 
 *
 *   **/