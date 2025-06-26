// Second Largest Element in an Array without sorting
//--------------------------------------------------------------------------
// Friday, October 25, 2024
// 1:20 PM
//-------------------------------------------------------------------------
// My approach 
//-----------------------------------------------------------------------
//-----------------------------------------------------------------------

// Same as my approach its just in worst case like ( eg . 1 ,7,7,7,7,)

// Time complexity : n + nlog(n)

/*
#include <iostream>
#include <vector>
using namespace std;
// Partition function for QuickSort
int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[low];  // Choosing first element as pivot
    int i = low;
    int j = high;
    while (i < j) {
        // Find the first element greater than pivot from left side
        while (arr[i] <= pivot && i <= high - 1) {
            i++;
        }
        // Find the first element smaller than pivot from right side
        while (arr[j] > pivot && j >= low + 1) {
            j--;
        }
        // Swap the elements if they are in the wrong order
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }
    // Swap pivot with its correct position
    swap(arr[low], arr[j]);
    return j;  // Return the partition index
}
// Recursive QuickSort function
void qs(vector<int> &arr, int low, int high) {
    if (low < high) {
        int inpar = partition(arr, low, high); // Get partition index
        qs(arr, low, inpar - 1);  // Sort left part
        qs(arr, inpar + 1, high);  // Sort right part
    }
}
// Wrapper function to call QuickSort
void quicksort(vector<int> &arr) {
    qs(arr, 0, arr.size() - 1);
}
// Function to print second largest and second smallest element
void finalsort(vector<int> &arr) {
    int n = arr.size();
    if (n < 2) {
        cout << "Not enough elements to find second largest and second smallest." << endl;
        return;
    }
    
    cout << "Second Largest: " << arr[n - 2] << endl;  // Second largest
    cout << "Second Smallest: " << arr[1] << endl;    // Second smallest
}
int main() {
    vector<int> arr = {7, 2, 9, 1, 6, 8};
    
    quicksort(arr);  // Sort the array using QuickSort
    finalsort(arr);  // Find second largest and second smallest elements
    return 0;
}
*/

//----------------------------------------------------------------------------------------------------------------------

// Better force approach ( striver )

// Time complexity : o(n)
/*
int larg(int n , vector<int> a ){
    int largest = a[0];
    for( int i = 0 ; i < n ; i++) {
        if( a[i] > largest ){
            largest = a[i];
        }
    }
    return largest;
}
int slarge( int n , vector<int> a , int largest){
    int secondlargest = -1 ;
    for( int i = 0 ; i< n ; i++) {
        if( a[i] > secondlargest && a[i] != largest){
            secondlargest = a[i];
        }
    }
    return secondlargest;
}
int smal(int n , vector<int> a ){
    int smallest = a[0];
    for( int i = 0 ; i< n ; i++){
        if(a[i] < smallest){
            smallest = a[i];
        }
    }
    return smallest;
}
int ssmal(int n, vector<int> a, int smallest) {
    int secondsmallest = INT_MAX;
    for(int i = 0 ; i< n ; i++){
        if(a[i]<secondsmallest && a[i]!= smallest){
            secondsmallest = a[i];
        }
    }
    return secondsmallest;
}
vector<int> getSecondOrderElements(int n, vector<int> a) {
    int largest = larg( n, a);
    int secondlargest = slarge(n,a,largest);
    int smallest = smal(n,a);
    int secondsmallest = ssmal(n,a,smallest);
    return {secondlargest,secondsmallest};
}
    */
//---------------------------------------------------------------------------------------------------------------
// Optimal approach (striver)

// Time complexity: 0(n)


#include<bits/stdc++.h>
using namespace std;
int testlargest(int n, vector<int> a) {
    int largest = a[0];
    int secondlargest = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (a[i] > largest) {
            secondlargest = largest;
            largest = a[i];
        } else if (a[i] > secondlargest && a[i] != largest) {
            secondlargest = a[i];
        }
    }
    return (secondlargest == INT_MIN) ? -1 : secondlargest;
}
int testsmallest(int n, vector<int> a) {
    int smallest = a[0];
    int secondsmallest = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (a[i] < smallest) {
            secondsmallest = smallest;
            smallest = a[i];
        } else if (a[i] < secondsmallest && a[i] != smallest) {
            secondsmallest = a[i];
        }
    }
    return (secondsmallest == INT_MAX) ? -1 : secondsmallest;
}
vector<int> getSecondOrderElements(int n, vector<int> a) {
    int secondlargest = testlargest(n, a); 
    int secondsmallest = testsmallest(n, a);
    return { secondlargest, secondsmallest };
}
int main() {
    vector<int> a = {1, 2, 4, 7, 7, 5};
    vector<int> result = getSecondOrderElements(a.size(), a);
    cout << "Second Largest: " << result[0] << endl;
    cout << "Second Smallest: " << result[1] << endl;
    return 0;
}
