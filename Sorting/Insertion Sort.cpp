/**
 * Practice Problem ~ Shadman S.
 * Topic: Sorting - Insertion Sort
 * Problem Statement: Given an Array, sort the Array using the insertion-sorting method
 */
#include <iostream>
using namespace std;

class Sort{
public:

    void insertionSort(int numbers[], int numberSize){ // function for insertion-Sort Sort
    int Temp;
    int  j;
    for (int i = 1; i < numberSize; i++){ // for loop to run while loop by initializing j
        j = i;
        
        while ( j > 0 && numbers[j] < numbers[j - 1]){ // While loop to sort
            Temp = numbers[j];
            numbers[j] = numbers[j - 1];
            numbers [j - 1] = Temp;
            j--; // ensures that all elements are in the correct position or not
        }
    }
}
    
    void printLine(){ // function for aading new line
         cout << endl;
     }
};

int main(){
Sort sorts;
int numbers[] = {5,4,3,20,1,6,7,2}; // initialized the array
int numberSize = 8; // initialized the size 

cout << "Unsorted: ";
for (int i = 0; i < numberSize; i++){ // for loop to print Unsorted Array
    cout << numbers[i] << " ";
}
sorts.printLine(); // functions called
sorts.insertionSort(numbers, numberSize);  // functions called

cout << "Sorted: ";
for (int i = 0; i < numberSize; i++){ // for loop to print sorted Array
    cout << numbers[i] << " ";
}
sorts.printLine(); // functions called

    return 0;
}
