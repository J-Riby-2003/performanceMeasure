#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

int fact(long int number);
int timer();

int main(){
    // Runs the program.
    timer();
    return (0);
}

int timer(){
    long int number = 10000000000;
    
    clock_t start_t, end_t;
    double total_t;
    int i;
    
    printf("This is a simple C program to calculate the performance of a single thread on your CPU, this may take awhile depending on your make / model. Do not worry this will finish eventually, please upload your results to the README.md in the directory (just clone it and reupload).\n");
    
    sleep(3);
    
    //clear screen
    system("clear");
    
    //literally do not worry about this code I know its bad, I could not be bothered.
    printf("Starting the program in 5 second(s)...\n");
    sleep(1);
    printf("Starting the program in 4 second(s)...\n");
    sleep(1);
    printf("Starting the program in 3 second(s)...\n");
    sleep(1);
    printf("Starting the program in 2 second(s)...\n");
    sleep(1);
    printf("Starting the program in 1 second(s)...\n");
    sleep(1);
    
    start_t = clock();
    printf("Starting factorial test..., start time... %ld\n", start_t);
    fact(number);
    end_t = clock();
    
    printf("End of test, end time... %ld\n", end_t);
    sleep(5);
    total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
    printf("Total time taken... %f\n seconds...", total_t  );
    printf("Exiting of the program...\n");
    return(0);
}

 int fact(long int number){
    // Factorial function, returns the factorial of a number.
    int factorial = 1;
    for(int i = 1; i <= number; i++){
        factorial *= i;
    }
    return factorial;
}
