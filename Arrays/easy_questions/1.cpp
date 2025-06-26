// find the largest element in the array.
//-----------------------------------------------------------------------------------------------------
// 26 October 2024
// 22:20
//------------------------------------------------------------------------------------------------------
// Only approach
//-------------------------------------------------------------------------------------------------------
// Time complexity : 0(n)
// Spcae complexity : 0(1)


#include <iostream>
#include <vector>
using namespace std;
// Function to find the largest element in the array
int largestElement(vector<int> &arr, int n) {
    int largest = arr[0];  // Assume the first element is the largest
    for (int i = 1; i < n; i++) {  // Start loop from index 1 (since 0 is already assumed)
        if (arr[i] > largest) {  
            largest = arr[i];  // Update the largest if a bigger element is found
        }
    }
    return largest;  // Return the largest element found
}
int main() {
    vector<int> jhk = {23, 3, 4, 5, 45, 5};  // Initialize the vector
    int n = jhk.size();  // Get the size of the vector
    cout << "Largest element: " << largestElement(jhk, n) << endl;  // Call function and print result
    return 0;  // Return successful execution
}