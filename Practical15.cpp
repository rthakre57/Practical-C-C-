#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;

    // Input the size of the array
    cout << "Enter the number of elements: ";
    cin >> n;

    // Declare the array
    vector<int> arr(n);

    // Input the elements of the array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Step 1: Sort the array
    sort(arr.begin(), arr.end());

    // Step 2: Create a new vector to store unique elements
    vector<int> uniqueArr;

    // Step 3: Traverse the sorted array and add unique elements
    for (int i = 0; i < n; i++) {
        if (i == 0 || arr[i] != arr[i - 1]) { // Add element only if it's not the same as the previous one
            uniqueArr.push_back(arr[i]);
        }
    }

    // Output the array with unique elements
    cout << "Array without duplicates: ";
    for (int i = 0; i < uniqueArr.size(); i++) {
        cout << uniqueArr[i] << " ";
    }
    cout << endl;

    return 0;
}



Output:
Enter the number of elements: 7
Enter the elements of the array: 3 5 7 3 2 5 8
Array without duplicates: 2 3 5 7 8
