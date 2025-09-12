// Write a program that populates an integer array, goes through it step by step and searches for a given number entered by the user. If the number is found, it should print “found” and return the position of the number; otherwise print “not found”.
#include <iostream>
using namespace std;

int main() {
   int a,b,c,d;
   cin>>a>>b>>c>>d;
    int numbers[] = {a,b,c,d};
    int size = sizeof(numbers) / sizeof(numbers[0]);  

    
    int target;
    cout << "Enter the number to search for: ";
    cin >> target;

    
    bool found = false;


    for (int i = 0; i < size; i++) {
        if (numbers[i] == target) {
            cout << "Found! The number " << target << " is at position " << i << "." << endl;
            found = true;
            break; 
        }
    }

    
    if (!found) {
        cout << "Not found. The number " << target << " is not in the array." << endl;
    }

    return 0;
}



























/* Test Case 1
Input:
Array: [1, 3, 5, 7, 9]
Search: 5
Output:
Found at position: 2
Test Case 2
Input:
Array: [2, 4, 6, 8]
Search: 7
Output:
Not found */

