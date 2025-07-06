// Remove Duplicates from sorted array

// time complecity -> Nlog(n) + n 
// time complecity -> o(n)

#include <vector>
#include <set>  // Include set for std::set
int removeDuplicates(std::vector<int> &arr, int n) {
    set<int> st;  
    for (int i = 0; i < n; i++) {
        st.insert(arr[i]);
    }
    
    int k = st.size();
    int index = 0;
    for (auto it : st) {
        arr[index] = it;
        index++;
    }
    
    return k;
}
