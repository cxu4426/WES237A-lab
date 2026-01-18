#include <unistd.h>
   
int myAdd(int a, int b){
        sleep(1);
        return a+b;
}

int myMult(int a, int b){
        sleep(1);
        return a*b;
}

/*
1s :
CPU_0 Add: 8 in 1.08608078956604
CPU_1 Multiply: 15 in 1.0825059413909912

5s :
CPU_0 Add: 8 in 5.093982458114624
CPU_1 Multiply: 15 in 5.087357997894287

10s :
CPU_0 Add: 8 in 10.103015899658203
CPU_1 Multiply: 15 in 10.084063053131104

20s :
CPU_0 Add: 8 in 20.0840847492218
CPU_1 Multiply: 15 in 20.074297189712524
*/
