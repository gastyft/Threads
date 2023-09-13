#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <windows.h>
#define color system("COLOR B")
#define MAX 10000



void *funcion1(void *p)
{
printf("Thread: %d\n", pthread_self());
pthread_exit(0);
}


int main()
{
int j=0;
    color;
pthread_attr_t attr;
pthread_attr_init(&attr);
pthread_t thid[MAX];
   pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_DETACHED);
   while(j<10){
for(int i = 0; i < MAX; i++){

pthread_create(&thid[i], &attr, funcion1, NULL);
printf("Hola Threads!. Soy el thread %d ejecutando por %d vez \n",getpid(),i);
}

   j++;
  /**printf("Start sleep\n");
    Sleep(10000);
    printf("End sleep\n");
   */
   }

    return 0;
}
