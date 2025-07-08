//Left rotate array by D places 

// Brute force : 


// Time complexity : 0 ( n + d )
// Space complexity : 0 (d)
/*
#include<iostream>
#include<vector>
using namespace std;
// Function to perform left rotation by 'd' positions
void shifting_d(vector<int> & arr , int n , int d ){
    // Handle cases where d >= n (d should be within array bounds)
    d = d % n;  
    // Step 1: Store the first 'd' elements in a temporary array
    int temp[d];  
    for(int i = 0; i < d; i++) {
        temp[i] = arr[i];  // Copy first 'd' elements
    }
    // Step 2: Shift remaining elements to the left by 'd' positions
    for(int i = d; i < n; i++) {
        arr[i - d] = arr[i];  
    }
    // Step 3: Copy back the stored 'd' elements to the end of the array
    for(int i = n - d; i < n; i++) {
        arr[i] = temp[i - (n - d)];  
    }
}
int main() {
    vector<int> arr = {7, 5, 2, 11, 2, 43, 1, 1}; // Input array
    int n = arr.size(); // Size of the array
    int d = 3; // Number of positions to shift left
    shifting_d(arr, n, d); // Call the function
    // Print the rotated array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl; 
    return 0;
}
*/

// ---------------------------------------------------------------------------------------------------
// ---------------------------------------------------------------------------------------------------


// Optimal approach:

// Time complexity : 0 ( n  )
// Space complexity : 0 (1)
/*
#include<iostream>
#include<vector>
#include<algorithm>  // For using reverse()
using namespace std;
// Function to rotate an array to the left by 'd' positions using the reversal algorithm
void left_rotate(int arr[], int n, int d) {
    d = d % n;  // Handle cases where d >= n (ensures valid rotation)
    
    // Step 1: Reverse the first 'd' elements
    reverse(arr, arr + d);  
    // Step 2: Reverse the remaining 'n - d' elements
    reverse(arr + d, arr + n);  
    // Step 3: Reverse the entire array
    reverse(arr, arr + n);
}
int main() {
    int n = 6;  
    int arr[n] = {1, 2, 3, 4, 5, 6}; // Input array
    int d = 2;  // Number of positions to rotate left
    left_rotate(arr, n, d);  // Call the function
    // Print the rotated array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
*/

// If a person asks details of reverse fucntion:
// void Reverse(int arr[], int start, int end)
// {
//   while (start <= end)
//   {
//     int temp = arr[start];
//     arr[start] = arr[end];
//     arr[end] = temp;
//     start++;
//     end--;
//   }
// }