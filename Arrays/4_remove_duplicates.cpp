/*
    Remove duplicates from the sorted non-decreasing array (inplace removal)


Brute force :
    Using set data structure as it does not allow duplicates init 
    Time complexity: O(N*logN)+O(N) to check (search operation) and store 
    Space complexity: O(N)

Optimal approach:
    Using two pointer technique
    point the first element and traverse the array until the element appears which is not equal to it and increment an index and swap and repeat the process 

    TIme complexity: O(N)
    Space complexity: O(1) 

*/


#include<bits/stdc++.h>
using namespace std;


// print function
void print(vector<int>vec, int n){
    for (int i = 0; i < n; i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}

// Brute force approach
void brute(vector<int>vec, int n){
    cout << "Using Brute force approach " << endl;
    set<int> st;
    for(auto i: vec){
        st.insert(i);
    }
    for(auto i:st){
        cout << i << " ";
    }
    cout << endl;
}


// Optimal approach
void optimal(vector<int>vec, int n){
    cout << "Using Optimal approach " << endl;
    int i = 0;
    int j = 1;
    while(j<n){
        if(vec[i]!=vec[j]){
            i++;
            vec[i] = vec[j];
        }
        j++;
    }
    print(vec, i+1);
}


int main(){
    int n;
    cout << "enter the size of the array: ";
    cin >> n;
    vector<int> vec(n);
    cout << "Enter " << n << " elements in to the array" << endl;
    for (int i = 0; i < n; i++){
        cin >> vec[i];
    }

    brute(vec, n);
    optimal(vec, n);

    return 0;
}