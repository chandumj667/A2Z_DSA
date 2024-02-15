/*
All divisors of a given number

input :36
output: 1, 2, 3, 4, 9, 12, 18, 36

brute force :
    the divisors are range between 1 to n
    Time complexity: O(N)
    Space complexity: O(1)

Optimal approach:
    traversing upto square root of n as we get the divisors of the given n
    as 1*n or n*1 are same so we consider 1 and n as divisors or else 2*n/2 or n/2*2 are also divisors of n

    Time complexity: O(sqrt(n))
    Space complexity: O(1) // as we printing 

*/

#include <bits/stdc++.h>
using namespace std;

// Printing function
void print(vector<int>vec){
    for (int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
}

// Brute force approach
void brute(int n){
    vector<int> vec;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            // cout << i << " ";
            vec.push_back(i);
        }
    }
    print(vec);
}

// optimal approach
void optimal(int n){
    vector<int> vec;
    for (int i = 1; i <= sqrt(n); i++){
        if(n%i==0){
            // cout<<i;
            vec.push_back(i);
            if(n/i!=i){
                // cout<<(n / i);
                vec.push_back(n / i);
            }
        }
    }
    sort(vec.begin(), vec.end());
    print(vec);
}


int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Brute force : "<<endl;
    brute(n);
    cout << endl << "Optimal approach : " << endl;
    optimal(n);
    return 0;
}