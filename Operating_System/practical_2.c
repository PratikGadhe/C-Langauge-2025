#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <pthread.h>

void *thread_fun(void *arg)
{
    printf("thread is running. PID = %d\n",getpid());
    return NULL;
}

int main()
{
    pthread_t t;
    pid_t pid;

    /* Thread creation */
    pthread_create(&t,NULL,thread_fun ,NULL);
    pthread_join(t,NULL);

    /* Process creation using fork() */
    pid = fork();
    if (pid == 0)
    {
        printf("Child process using fork(). PID = %d\n", getpid());
        _exit(0);
    }
    else
    {
        wait(NULL);
        printf("Parent process. PID = %d\n", getpid());
    }
    /* Process creation using vfork() */
    pid = vfork();
    if (pid == 0)
    {
        printf("Child process using vfork(). PID = %d\n", getpid());
        _exit(0);
    }
    else
    {
        printf("Parent continues after vfork(). PID = %d\n", getpid());
    }
    return 0;
}