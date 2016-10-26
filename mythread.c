#include<pthread.h>
#include<stdio.h>

void thread_function(void)
{
  printf(" Hello POSIX thread\n");
  printf(" Thread id: %d\n", pthread_self());
}

void main()
{
  pthread_t mythread;
  pthread_create(&mythread, NULL, thread_function, NULL);
  pthread_join(mythread, NULL);
}
