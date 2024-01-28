/*
Find the Largest element in an array
Problem Statement: Given an array, we have to find the largest element in the array.

Examples
Example 1:
Input: arr[] = {2,5,1,3,0};
Output: 5
Explanation: 5 is the largest element in the array.

Example2:
Input: arr[] = {8,10,5,7,9};
Output: 10
Explanation: 10 is the largest element in the array.
*/


/*
Brute force :
    sort the array and return the element at last index of the array
    Time complexity : O(N logN)
    Space complexity : O(1)

Optimal :
    maintain a variable and check with current element by traversing the array  and update if the element is greater than the maximum variable element
    Time complexity : O(N)
    Space complexity : O(1)
*/


#include<bits/stdc++.h>
using namespace std;

int Brute_greatest_element(vector<int> &vec, int n){
    // n is the size of the vector
    sort(vec.begin(), vec.end());
    return vec[n-1];
}


int optimal_greatest_element(vector<int>vec, int n){
    int maxi = vec[0];
    for (int i = 1; i < n; i++){
        if(vec[i]>maxi){
            maxi = vec[i];
        }
    }
    return maxi;
}

void print(vector<int> vec){
    for (int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main(){
    int n;
    cout << "Enter the size of the array: " << endl;
    cin >> n;
    vector<int> vec(n);
    cout << "Enter " << n << " element in to the array: " << endl;
    for (int i = 0; i < n; i++){
        cin >> vec[i];
    }
    cout << "The element in the array are: " << endl;
    print(vec);
    cout << "Brute force approach Greatest element in the array : " << Brute_greatest_element(vec, n) << endl;

    cout << "Optimal approach Greatest element in the array : " << optimal_greatest_element(vec, n) << endl;
}