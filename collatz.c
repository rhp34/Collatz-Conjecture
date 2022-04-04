/* 
This program tests the collatz conjecture to any value given as a 
command line argument. The basis of the collatz conjecture(3x + 1) is that any positive value "X" will 
go to 1 if the following rules are followed. If the "X" is even divide "X" by 2(or half it) and if "X" 
is odd use the conjecture which is (3X + 1). So far every number tested in human history has resulted in 
the value "X" eventually returning to 1. This is why the collatz conjecture is known as the impossible 
problem. The concept of this program is to find a number where the conjecture does not result in 1 thus proving
the conjecture false by proof of counterexample. The conjecture cannot be proven true either since there are 
an infinite amount of numbers to test. This program is limited to 64 bits for numbers therefore, the highest
number that can be tested is 18,446,744,073,709,551,615 since we are testing unsigned numbers(only positive).
This program also calculates the time taken for the program to run. 
*/


#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

void collatz(unsigned long long);


int main(int argc, char *argv[]) {

    unsigned long long j = atoi(argv[1]);                     // command line argument/value to run collatz conjecture to

    double time_spent = 0.0;                    // init run time
    clock_t begin = clock();                    // start run time

    for(unsigned long long i = 1; i <= j; i++) {              // run collatz conjecture until the value passed as a CLA
        collatz(i);
    }

    clock_t end = clock();                      // stop run time

                                                // calculate run time in seconds
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC; 
    printf("Time spent running collatz conjecture to value %llu takes %f seconds \n", j, time_spent);

}

void collatz(unsigned long long i) {
    //int i = 1;
    unsigned long long j = i;                                 // value being tested
    while(i > 1){                               // basis of conjecture that all positives numbers return to 1
        if(i % 2 == 0) {                        // collatz rule for even numbers
            i = i /2;
            //printf("%d \n", i);
        }
        else {                                  // collatz rule for odd numbers
            i = (i*3) + 1;
            //printf("%d \n", i);
        }
    }
    if(i == 1) {
        printf("The value %llu goes to 1 \n", j); 
    }
    else if(i != 1) {
        printf("Holy smokes %llu broke the collatz problem \n", j);
    }
}


