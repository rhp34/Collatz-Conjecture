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
