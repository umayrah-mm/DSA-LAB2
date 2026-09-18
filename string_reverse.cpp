#include <iostream>
#include <string>

using namespace std;

int main() {
    // 1. Dynamically allocate memory for the string
    string* dynamicString = new string;

    cout << "Enter a string to reverse: ";
    getline(cin, *dynamicString);

    // 2. Reverse the string
    int start = 0;
    int end = (*dynamicString).length() - 1;

    while (start < end) {
        // Swap the characters at the start and end positions
        char temp = (*dynamicString)[start];
        (*dynamicString)[start] = (*dynamicString)[end];
        (*dynamicString)[end] = temp;

        // Move the markers closer together
        start++;
        end--;
    }

    // 3. To Display the reversed result
    cout << "Reversed string: " << *dynamicString << endl;

    // 4. Free the allocated memory
    delete dynamicString;
    dynamicString = nullptr;

    return 0;
}
