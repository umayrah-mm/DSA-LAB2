#include <iostream>
using namespace std;

// Part 1: Function to analyze the pointer
void analyze_pointer(int *ptr) {
    // 1. Print the memory address held by the pointer
    cout << "Memory Location: "<< ptr<< endl;
    
    // 2. Print the integer value by dereferencing the pointer
    cout << "Value at Location: "<<*ptr<< endl;
}

int main() {
    // Part 2
    //Task 1: Allocate an int on the stack
    int iValue = 4; 
    
    // Passing its address using &S
    analyze_pointer(&iValue); 
    cout << endl;

    // Part 2
    //Task 2: Allocate an int on the heap
    int *heapPtr = new int; 
    *heapPtr = 8 ;          
    
    // Passing the heap pointer directly
    analyze_pointer(heapPtr); 

    // Cleaning heap memory
    delete heapPtr; 
    heapPtr = nullptr;

    return 0;
}
