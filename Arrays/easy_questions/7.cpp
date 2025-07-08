//Move zeros to the end of array 

// Brute force : 


// Time complexity : 0 (2n)

// Space complexity : 0 (x , x here is the non zero numbers ) , in worst case the complexity can be 0( n ) also if there are no zeros .


/*
#include<iostream>
#include<vector>
using namespace std;
// Function to move all zeros to the end while maintaining order of non-zero elements
void zeros(vector<int> &arr, int n) {
    vector<int> temp;  // Temporary vector to store non-zero elements
    // Step 1: Copy all non-zero elements to temp
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            temp.push_back(arr[i]);
        }
    }
    int nz = temp.size();  // Number of non-zero elements
    // Step 2: Copy back non-zero elements to original array
    for (int i = 0; i < nz; i++) {
        arr[i] = temp[i];
    }
    // Step 3: Fill the remaining positions with zeros
    for (int i = nz; i < n; i++) {
        arr[i] = 0;
    }
}
int main() {
    vector<int> arr = {1, 2, 0, 0, 0, 5, 4, 3, 5, 0, 0, 0};  // Input array
    int n = arr.size();  
    zeros(arr, n);  // Call the function
    // Print the modified array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

*/

//------------------------------------------------------------
//------------------------------------------------------------

// Optimal solution : 


// Time complexity : 0 (n)

// Space complexity : 0 (1)

/*
#include <iostream>
using namespace std;
// Function to shift all zeros to the end
void shifting_zeros(int arr[], int n) {
    int j = -1; // 'j' will store the index of the first zero found
    // Step 1: Find the first zero in the array
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            j = i;  // Store the first zero's index
            break;  // Exit the loop after finding the first zero
        }
    }
    // If no zeros are found, the array is already in the correct state
    if (j == -1) return;
    // Step 2: Swap non-zero elements forward while shifting zeros backward
    for (int i = j + 1; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]); // Swap current non-zero element with the zero at 'j'
            j++; // Move 'j' to the next zero position
        }
    }
}
int main() {
    int arr[10] = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1}; // Sample array
    int n = 10; // Size of the array
    // Calling the function to shift zeros
    shifting_zeros(arr, n);
    // Printing the modified array
    cout << "Array after shifting zeros to the end: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
*/