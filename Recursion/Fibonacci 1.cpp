/**
 * Practice Problem ~ Shadman S.
 * Topic: Recursion - Fibonacci
 * ~ Fibonacci 
 * Problem Statement: given a integer n, find the nth term of the fibonacci series
 */
#include <iostream>
using namespace std;

int fibonacci(int n){ //Function to return fibonacci occurance
    //base case
    if (n == 0){ //if n is 0 returns 0
        return 0;
    }
    else if (n == 1){ //if n is 1 then returns 1
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2); //calling the recursion function
    // for fibonacci to occur previous add two numbers needs to be added to get the next one
}
int main()
{
    int n; //decalring n value
    //output 0,1,1,2,3,5
    cout << "Enter a number: ";
    cin >> n; //inputing the n value
    cout << endl;
    
    cout << "The " << n << "'th term of the fibonacci series is "<< fibonacci (n) << endl;

    return 0;
}
