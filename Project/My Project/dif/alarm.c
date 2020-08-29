
#include <stdio.h>
#include <signal.h>

int distance = 60;
 
void meter(int signum) {
   distance = distance - 1;
   alarm(1);
}
 
void update(int signum) {
   printf("\nYou have %d feet left!\n", distance);
   alarm(3);
}
 
 
int main(void) {
 
   signal(SIGALRM, meter);
   signal(SIGALRM, update);
   alarm(1);
    
   getchar();
 
   return 0;
}
