/*
Check the give number or string is a palindrome or not

brute force approach:
    copy the number and reverse it and compare with the first one if they both are equal then it is equal

    Time complexity:O(N)
    Space complexity:O(1)

Optimal approach:
    convert the number into a string and use two pointer approach and compare the two pointers
    if they both collide when comparing then it is a palindrome 
    if they does not match at any place then it is not a palindrome

    Time complexity: O(LogN)
    space complexity: O(1)

*/


#include<bits/stdc++.h>
using namespace std;

bool palindrome_brute(int n){
    int temp = n;
    int reversed = 0;
    while (n > 0){
        int rem = n % 10;
        reversed = (reversed + rem) * 10;
        n /= 10;
    }
    reversed /= 10;
    if(reversed==temp)
        return true;
    else
        return false;
}


// optimal approach
bool palindrome_optimal (int n){
    string val = to_string(n);
    int l = 0;
    int h=val.length()-1;
    while(l<h){
        if(val[l]!=val[h]){
            return false;
        }
        l++;
        h--;
    }
    return true;
}


int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Brute force: ";
    if(palindrome_brute(n)){
        cout << n << " is a palindrome " << endl;
    }else{
        cout << n << " is not a palindrome " << endl;
    }

    cout << "Optimal approach: ";
    if (palindrome_optimal(n)){
        cout << n << " is a palindrome " << endl;
    }
    else{
        cout << n << " is not a palindrome " << endl;
    }

    return 0;
}