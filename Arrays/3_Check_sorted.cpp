/*
Check if given array is sorted or not 

Brute force approach:
    Check each element with its future element whether it is smaller or not
    if any future element is smaller than the current element then return false or else return true 
    Time complexity: O(N^2)
    Space complexity: O(1)

Optimal approach:
    Using two pointer approach by pointing current and prev element if the current element is smaller than the prev then return false or else return true

    Time complexity: O(N)
    Space complexity: O(1)

*/

#include <bits/stdc++.h>
using namespace std;

// Brute force approach
bool Brute(vector<int>vec, int n){
    for (int i =1; i<n; i++){
        if(vec[i]<vec[i-1]){
            return false;
        }   
    }
    return true;
}

// Optimal approach
bool Optimal(vector<int> vec, int n){
    for(int i=1; i<n; i++){
        if(vec[i-1]>vec[i]){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout << "Enter the size: ";
    cin >> n;

    vector<int> vec(n);
    cout << "Enter " << n << " elements in to the array: " << endl;
    for(int i=0;  i<n; i++){
        cin >> vec[i];
    }
    
    cout << "Using Brute force approach" << endl;
    bool brute = Brute(vec, n);
    if (brute){
        cout << "Given array is in sorted order" << endl;
    }
    else{
        cout << "Given array is not in sorted order" << endl;
    }

    cout << "Using Optimal approach" << endl;
    bool optimal = Optimal(vec, n);
    if (optimal){
        cout << "Given array is in sorted order" << endl;
    }
    else{
        cout << "Given array is not in sorted order" << endl;
    }

    return 0;
}