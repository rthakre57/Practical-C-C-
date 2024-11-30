#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    // Input size of the first array
    cout << "Enter the size of the first array: ";
    cin >> n1;

    // Input size of the second array
    cout << "Enter the size of the second array: ";
    cin >> n2;

    // Declare arrays
    int arr1[n1], arr2[n2], merged[n1 + n2];

    // Input elements for the first array
    cout << "Enter elements of the first array: ";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    // Input elements for the second array
    cout << "Enter elements of the second array: ";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    // Merge the two arrays
    int index = 0;
    for (int i = 0; i < n1; i++) {
        merged[index++] = arr1[i];
    }

    for (int i = 0; i < n2; i++) {
        merged[index++] = arr2[i];
    }

    // Output the merged array
    cout << "Merged array: ";
    for (int i = 0; i < n1 + n2; i++) {
        cout << merged[i] << " ";
    }
    cout << endl;

    return 0;
}


Output:
Enter the size of the first array: 3
Enter the size of the second array: 3
Enter elements of the first array: 1 2 3
Enter elements of the second array: 4 5 6
Merged array: 1 2 3 4 5 6 


=== Code Execution Successful ===
