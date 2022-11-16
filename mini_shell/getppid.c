
danielaloperahernandez
/
simple_shell
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
simple_shell/mini_shell/getppid.c
@danielaloperahernandez
danielaloperahernandez Adding mini shell
 1 contributor
16 lines (14 sloc)  192 Bytes
#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(void)
{
    pid_t my_pid;

    my_pid = getppid();
    printf("%u\n", my_pid);
    return (0);
}
