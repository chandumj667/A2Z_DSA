/*
Rotate array by D elements;

Brute force approach
    using another array to store the elements from d+1 to n-1 in to the new array and from there update the new array from 0 to d elements 

    Time complexity: O(N)
    Space complexity: O(N)

Optimal approach:
    using reverse method 
    reverse the elements from 0 to d 
    reverse the elements from d+1 to n-1
    reverse the elements from 0 to n-1

    Time complexity: O(N)
    Space complexity: O(1)
*/

#include<bits/stdc++.h>
using namespace std;


// brute force approach
void brute(vector<int>vec, int d, int n){
    d=d%n;
    if(d>n)
        return;
    
}


int main(){
    int n;
    cout << "enter the size of the elements: ";
    cin>>n;
    vector<int>vec(n);
    cout << "Enter " << n << " elements in to the array: " << endl;

}