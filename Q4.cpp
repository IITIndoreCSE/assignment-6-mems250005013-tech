// Write a program that populates an integer array, goes through it step by step and searches for a given number entered by the user. If the number is found, it should print “found” and return the position of the number; otherwise print “not found”.




#include <iostream>
using namespace std;

int main (){
    int size;
    cout << "Enter size of array:\n";
    cin>> size ;
    int arr[size];
    cout << "Enter elements of array:\n";
    for (int i=0; i<size; i++){
        cin >> arr[i];
}

int target ;
cout << "Enter target\n ";
cin >> target ;
for (int i=0; i< size;i++){
    if ( arr[i] == target)
    {
        cout << "Element found at index: " << i << endl;
        return 0;
    }
}
cout << "Element not found in the array." << endl;
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

