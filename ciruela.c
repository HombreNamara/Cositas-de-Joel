#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
#define hijos 5

int main()
{
    pid_t pid;
    int estado;
    char palabra[30];
    printf("padre: %d\n",getpid());
    printf("Ingrese una palabra\n");
    scanf("%s",palabra);
    
    for (int i = 0; i < hijos; i++)
    {
        pid=fork();
        if (pid==0)
        {
            printf("Soy %d, hijo de %d\n",getpid(),getppid());
            printf("%s\n",palabra);
            return 0;
        }
        
    }

    for (int i = 0; i < hijos; i++)
    {
        pid=wait(&estado);
    }
    
    
    return 0;
}
