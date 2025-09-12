// Write a program to populate a character array with letters of the alphabet at random; subsequently the letters in the array should be arranged alphabetically (without using the sort function).
#include <iostream>
#include <vector>
#include <algorithm> // for sort()
using namespace std;

int main() {
    int n;
    cout << "Enter number of letters: ";
    cin >> n;

    vector<char> letters(n);
    cout << "Enter " << n << " letters:\n";
    for (int i = 0; i < n; i++) {
        cin >> letters[i];
    }

    // Sort using ASCII values
    sort(letters.begin(), letters.end());

    // Print result with single quotes, commas, and curly brackets
    cout << "{";
    for (int i = 0; i < n; i++) {
        cout << "'" << letters[i] << "'";
        if (i < n - 1) cout << ", "; // add comma except for last element
    }
    cout << "}" << endl;

    return 0;
}
















/* Test Case 1
Input:
Random letters: ['m', 'g', 'x', 'a', 'p', 'b', 'f', 'q', 't', 'd']
Output:
Sorted letters: ['a', 'b', 'd', 'f', 'g', 'm', 'p', 'q', 't', 'x'] */
