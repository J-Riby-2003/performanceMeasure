#include <stdio.h>
#include <time.h>

long int fact(long int number);
int timer();

int main(){
    // Runs the program.
    timer(); 
}

int timer(){
    long int number = 9223372036854775807;
    float f;
    clock_t start,end;
    long int factorial = fact(number);
    start = clock();
    f = (float)(end-start);//CLOCKS_PER_SECONDS;
    printf("Factorial test took %.1f seconds to finish.", f);
    return 0;
}

long int fact(long int number){ 
    // Factorial function, returns the factorial of a number.
    long int factorial = 1;
    for(int i = 1; i <= number; i++){
        factorial *= i;
    }
    return factorial;
}
