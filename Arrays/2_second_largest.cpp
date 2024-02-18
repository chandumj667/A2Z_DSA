/*
Find Second Smallest and Second Largest Element in an array
Problem Statement: Given an array, find the second smallest and second largest element in the array. Print ‘-1’ in the event that either of them doesn’t exist.

Examples
Example 1:
Input: [1,2,4,7,7,5]
Output: Second Smallest : 2
    Second Largest : 5
Explanation: The elements are as follows 1,2,3,5,7,7 and hence second largest of these is 5 and second smallest is 2

Example 2:
Input: [1]
Output: Second Smallest : -1
    Second Largest : -1
Explanation: Since there is only one element in the array, it is the largest and smallest element present in the array. There is no second largest or second smallest element present.



Brute force:
    using sort and comparing the last element and before elements one by one if until they are not same and return that element

    Time complexity: O(NlogN)+ O(N)
    Space complexity : O(1)


Better approach:
    First the find the maximum/ largest element in the array
    then again traverse the array and find the element which is smaller than the largest

    Time complexity : O(N)+O(N) = O(2N)
    Space complexity : O(1)


Optimal :
    Using a largest and second largest variables to check between those and traverse the array and if any element in the traverse is larger than the largest then replace the second-largest with largest and largest with current element

    Note: check if the element is smaller than the largest and greater than the second-largest then replace the second-largest with the current element 
    
    return the second-largest element

    Time complexity: O(N)
    Space complexity: O(1)
*/

#include<bits/stdc++.h>
using namespace std;


void print(vector<int>vec, int n){
    for (int i = 0; i < n; i++){
        cout << vec[i] << " ";
    }
    cout << endl;
}


// Using Brute force approach
int brute(vector<int>vec, int n){

    sort(vec.begin(), vec.end());
    for (int i = n - 2; i >= 0; i--){
        if(vec[i]!=vec[i+1]){
            return vec[i];
            break;
        }
    }
    // return -1;
}

// Better approach
int better(vector<int>vec, int n){
    int maxi = vec[0];
    int sec_largest = INT_MIN;
    for (int i = 1; i < n; i++){
        maxi = max(maxi, vec[i]);
    }

    for (int i = 0; i < n; i++){
        if(vec[i]<maxi && vec[i]>sec_largest){
            sec_largest = vec[i];
        }
    }
    return sec_largest;
}

// Optimal approach
int optimal(vector<int>vec, int n){
    int largest = vec[0];
    int sec_largest = INT_MIN;
    for (int i = 0; i < n; i++){
        if(vec[i]>largest){
            sec_largest = largest;
            largest = vec[i];
        }
        else if(vec[i]<largest && vec[i]>sec_largest){
            sec_largest = vec[i];
        }
    }

    return sec_largest;
}


int main(){
    int n;
    cout << "enter the size: ";
    cin >> n;
    
    vector<int> vec(n);
    cout << "enter " << n << " element in to the array : " << endl;
    
    for (int i = 0; i < n; i++){
        cin >> vec[i];
    }
    
    print(vec, n);
    
    cout << "The second largest element of the array is:  " << endl;
    
    cout << "Using brute force approach : " << brute(vec, n)<<endl;
    cout << "Using better approach : " <<better(vec, n)<<endl;
    cout << "Using optimal approach : " << optimal(vec, n)<<endl;
    
    return 0;
}