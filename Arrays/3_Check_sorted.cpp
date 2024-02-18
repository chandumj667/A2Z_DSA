/*
Check if given array is sorted or not 




*/

#include <bits/stdc++.h>
using namespace std;


bool check_sorted(vector<int>vec, int n){
    for(int i=1; i<n; i++){
        if(vec[i-1]>vec[i]){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout << "Enter the number of elements to be entered: ";
    cin >> n;

    vector<int> vec(n);
    cout << "Enter " << n << " elements in to the array: " << endl;
    for(int i=0;  i<n; i++){
        cin >> vec[i];
    }

    if(check_sorted(vec, n)){
        cout << "Given array is in sorted order" << endl;
    }
    else{
        cout << "Given array is not in sorted order" << endl;
    }

    return 0;
}