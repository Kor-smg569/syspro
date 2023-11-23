#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int main() 
{
   int pid;
   pid = fork();
   if (pid == 0) {   // Child process
      printf("[Child] : Hello, world pid=%d\n", getpid());
   }
   else {   // Parent process
      printf("[Parent] : Hello, world pid=%d\n", getpid());
   }
}

