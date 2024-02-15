/*
Check for prime
mostly this ques is a sub ques for some other ques

A number which has exactly two factors they are 1 and itself  is called prime number


Brute force approach:
    using for loop from 1 to n and checking if n%i == 0 or not and maintain a count variable if the count >2 then it is not a prime number else it is a prime number
    Time complexity: O(N)
    space complexity: O(1)

Optimal approach:
    Using same for loop but till sqrt of n and checking the cnt variable whether it is greater than two or not

    Time complexity: O(sqrt(n))
    Space complexity: O(1)

*/

#include<bits/stdc++.h>
using namespace std;

// Brute force approach
void brute(int n){
    int cnt = 0;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            cnt++;
        }
    }
    if(cnt==2){
        cout << n << " is a prime number" << endl;
    }else{
        cout << n << " is not a prime number" << endl;
    }
}


// Optimal approach
void optimal(int n){
    int cnt=0;
    for(int i=1; i<=sqrt(n); i++){
        if(n%i==0){
            cnt++;
            if(n/i!=i){
                cnt++;
            }
        }
    }
    if(cnt==2){
        cout << n << " is a prime number" << endl;
    }else{
        cout << n << " is not a prime number" << endl;
    }
}


int main(){
    int n;
    cout << "Enter a number: ";
    cin>>n;

    cout << "Brute force : ";
    brute(n) ;
    cout << "Optimal approach : ";
    optimal(n);

    return 0;
}