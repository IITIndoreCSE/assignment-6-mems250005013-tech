// Write a program to populate a character array with letters of the alphabet at random; subsequently the letters in the array should be arranged alphabetically (without using the sort function).

#include <iostream>
using namespace std;
int main(){
int n;
cout << "Enter size of array:\n";
cin >> n ;
char arr[n ];

cout << "Enter elements of array:\n";
for (int i=0; i<n; i++){
    cin >> arr[i];
}

// sorting without sort function
for (int i=0; i<n-1; i++){
    for (int j=0; j<n-i-1; j++){
        if (arr[j] > arr[j+1]){
           char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
        }
      }
    }

cout << "Sorted array is:\n[";
for (int i=0; i<n; i++){
    cout << arr[i] << " ";
}
    cout<< "]";
return 0;
}








/* Test Case 1
Input:
Random letters: ['m', 'g', 'x', 'a', 'p', 'b', 'f', 'q', 't', 'd']
Output:
Sorted letters: ['a', 'b', 'd', 'f', 'g', 'm', 'p', 'q', 't', 'x'] */
