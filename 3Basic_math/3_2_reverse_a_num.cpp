/*
Reverse a number
example:
Input:  1234
Output: 4321


Approach:
Using modulus operator (%) and division operator(/) we can get the each digit and multiply with 10 and add those with reverse_sum;
    Time complexity: O(N)
    space complexity: O(1)

or we can convert the number in to string using two pointer technique to reverse and again convert it in to number
    Time complexity: O(logN)
    space complexity: O(1) and Auxillary space : O(N)

*/

#include<bits/stdc++.h>
using namespace std;


// brute force approach
long long int reverse_num_brute(long long int n){
    long long int reverse_num=0;
    while(n>0){
        int rem = n % 10;
        reverse_num = (reverse_num + rem )* 10;
        n /= 10;
    }
    return (reverse_num/10);
}

// optimal approach
long long int reverse_num_optimal(long long int n){
    string val = to_string(n);
    int l = 0;
    int h = val.length() - 1;
    while(l<h){
        swap(val[l], val[h]);
        l++;
        h--;
    }
    return (stoll(val));
}




int main(){
    long long int inp;
    cout << "Enter the number: ";
    cin >> inp;

    cout << "The reverse number of " << inp << " with brute force is " << reverse_num_brute(inp) << endl;
    cout << "The reverse number of " << inp << " with optimal approach is " << reverse_num_optimal(inp) << endl;

    return 0;
}