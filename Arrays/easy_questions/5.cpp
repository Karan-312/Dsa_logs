//left rotate array by one 

time complexity -> o(n)
time complexity -> o(1)->auxillary spac.comp
                -> o(N)->overall spac.comp



#include<bits/stdc++.h>
using namespace std ;

vector<int> rotatearray (vector<int> & arr , int n ){
    int temp = 0 ;
    for(int i = 0 ; i < n ; i++) {
        arr[i-1] = arr[j];
    }
    arr[n-1] = temp;
    return arr;
}