/*
GCD: Greatest Common Divisor 
the factors of given numbers and in that which are similar in all the given numbers and in the common factors the highest or greatest common number is the GCD or HCF


Brute force approach:
    using for loop from 1 to  min(n1, n2) replacing the gcd variable which have common divisor

    Time complexity: O(min(n1, n2))
    Space complexity: O(1) 

Optimal approach:
    Using euclidean algorithm
    gcd(a, b) = gcd(a-b, b) where a>b
    small changes make the algorithm better
    gcd(a, b) = gcd(a%b, b) where a>b

    it makes one of the a, b is zero then the other is the gcd 

    Time complexity: O(log(min(n1, n2)))
    Space complexity: O(1)
*/


#include<bits/stdc++.h>
using namespace std;

// Brute force approach
int  Brute(int n1, int n2){
    for (int i = min(n1, n2); i >1; i--){
        if(n1%i==0 && n2%i==0){
            return i;
        }
    }
    return 1;
}

// Optimal approach
int optimal(int n1, int n2){
    while(n1>0 && n2>0){
        if(n1>n2){
            n1 = n1 % n2;
        }
        else{
            n2 = n2 % n1;
        }
    }
    if(n1==0)
        return n2;
    return n1;
}

int main(){
    int n1, n2;
    cout << "Enter the two numbers : ";
    cin >> n1 >> n2;
    cout << "The GCD/HCF of " << n1 << " and " << n2 << " is: "<<endl;

    cout<<"Brute " << Brute(n1, n2) << endl;
    cout << "Optimal " << optimal(n1, n2) << endl;

    return 0;   
}