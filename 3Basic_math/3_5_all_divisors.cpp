/*
All divisors of a given number

input :36
output: 1, 2, 3, 4, 9, 12, 18, 36

brute force :
    the divisors are range between 1 to n
    Time complexity: O(N)
    Space complexity: O(1)

Optimal approach:


*/

#include <bits/stdc++.h>
using namespace std;

// Brute force approach
void brute(int n){
    for(int i=1; i<=n; i++){
        if(n%i==0){
            cout << i << " ";
        }
    }
}



int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Brute force : ";
    brute(n);
    // cout << "Optimal approach : " << optimal(n) << endl;
    return 0;
}