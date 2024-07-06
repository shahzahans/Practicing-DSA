/**
 * Practice Problem ~ Shadman S.
 * Topic: "Time Comp" ~ Binary Search O(log(n))/Linear Search O(n)
 * ~ Search Element K in sorted Array
 * Problem Statement: Given a sorted array of integers and an element K, write a function which returns the index on 
 * ~ which k is present, using loops
 */
#include <iostream>
using namespace std;

int linearSearch(int a[], int n, int k){
    for(int i = 0; i < n; i++){
        if (a[i] == k){
            return i;
        }
    }
    return -1; 
}

int binarySearch(int a[], int S, int E, int k){
    while(S <= E){
        int mid = (S+E)/2;
        
        if(a[mid] == k){
            return mid;
        }
        
        else if (a[mid] > k){
            E = mid - 1;
        }
        else{
            S = mid + 1;
        }
    }
    return -1;
}


int main(){
 int a[] = {1,3,6,8,9,11};
 int k = 6;
 int n = sizeof(a)/sizeof(a[0]);
 int S = 0;
 int E = n-1;
 int index1 = linearSearch(a,n,k);
 int index2 = binarySearch(a,S,E,k);
 
 cout << "The element " << k << " using linearSearch was found at index: " << index1 << endl;
 cout << "The element " << k << " using binarySearch was found at index: " << index2 << endl;

    return 0;
}