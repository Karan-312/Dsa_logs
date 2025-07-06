// CHECK if the array is sorted 
//  time complexitie is 0(n)
//  space complexitie is 0(1)



#include<bits/stdc++.h>
using namespace

bool isSorted (int n  , vector<int> a ){
    for (int i = 0; i < n; i++)
    {
        if(a[i] < a[i-1]){
            return false;
        }
    }
    return true;
}