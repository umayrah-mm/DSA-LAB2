#include <iostream>
#include <cassert>

// Forward declaration of the function
bool isSorted(const int* arr, const int size);

//Part 1
//Write the Tests First
// I am writing the tests before implementing the actual logic of the function.

void testSortedArray() {
    int arr[] = {1, 2, 3, 4, 5};
    assert(isSorted(arr, 5) == true); 
    std::cout << "Test 1 Passed: Sorted array\n";
}

void testUnsortedArray() {
    int arr[] = {4, 1, 3, 2, 5};
    assert(isSorted(arr, 5) == false);
    std::cout << "Test 2 Passed: Unsorted array\n";
}

void testDuplicatesArray() {
    int arr[] = {1, 2, 2, 3, 4};
    assert(isSorted(arr, 5) == true);
    std::cout << "Test 3 Passed: Array with duplicates\n";
}

void testSingleElementArray() {
    int arr[] = {10};
    assert(isSorted(arr, 1) == true);
    std::cout << "Test 4 Passed: Single element array\n";
}

void testDescendingArray() {
    int arr[] = {5, 4, 3, 2, 1};
    assert(isSorted(arr, 5) == false);
    std::cout << "Test 5 Passed: Descending array\n";
}

void testNegativeValuesArray() {
    int arr[] = {-5, -3, 0, 2, 4};
    assert(isSorted(arr, 5) == true);
    std::cout << "Test 6 Passed: Array with negative values\n";
}

// Additional Test Case 1: Empty Array
void testEmptyArray() {
    int* arr = nullptr;
    assert(isSorted(arr, 0) == true);
    std::cout << "Test 7 Passed: Empty array\n";
}

// Additional Test Case 2: All Elements Identical
void testAllIdenticalElements() {
    int arr[] = {7, 7, 7, 7};
    assert(isSorted(arr, 4) == true);
    std::cout << "Test 8 Passed: All identical elements\n";
}

//Part 2 
// I am implementing the loop to check if every element is less than or equal to the next one.
bool isSorted(const int* arr, const int size) {
    // An array with 0 or 1 element is always sorted
    if (size <= 1) {
        return true;
    }
    
    // I am checking if any element is greater than the next element
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false; // Found an out-of-order pair
        }
    }
    
    return true; // No out-of-order pairs found
}

int main() {
    std::cout << "Running tests after implementation...\n";
    
    // I am now running all the initial and additional tests
    testSortedArray();
    testUnsortedArray();
    testDuplicatesArray();
    testSingleElementArray();
    testDescendingArray();
    testNegativeValuesArray();
    testEmptyArray();
    testAllIdenticalElements();
    
    std::cout << "All 8 tests passed successfully!\n";
    return 0;
}
