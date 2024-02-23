/*
    left rotate by one element 


    Brute force approach:
        using another array to make the arr2[0] = arr1[1] as arr2[i] = arr1[i+1] and at last arr2[n-1] = arr1[0]

        Time complexity: O(N)
        Space complexity: O(N)

    Optimal approach:
        using a temp variable to store the arr[0]th element and traverse the array from 1 to n-1 and shifting the elements as arr[i-1] = arr[i]

        Time complexity: O(N)
        Space complexity: O(1)

*/


#include<bits/stdc++.h>
using namespace std;

// Printing the array
void print(vector<int>vec, int n){
    for (int i = 0; i<n; i++){
        cout << vec[i] << " ";
    }
    cout << endl;
}

// Brute force approach:
void brute(vector<int>vec, int n){
    vector<int>rtd(n);
    for(int i=1; i<n; i++){
        rtd[i - 1] = vec[i];
    }
    rtd[n - 1] = vec[0];

    print(rtd, n);
}


// Optimal approach
void optimal(vector<int>vec, int n){
    int temp = vec[0];
    for(int i=1; i<n; i++){
        vec[i-1]= vec[i];

    }
    vec[n-1]= temp;
    print(vec, n);
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter "<<n<<" Elements in to the array: "<<endl;
    vector<int>vec(n);
    for(int i=0; i<n; i++){
        cin >> vec[i];
    }
    cout << "Brute force approach: " << endl;
    brute(vec, n);
    cout << "Optimal approach: " << endl;
    optimal(vec, n);
    return 0;
}