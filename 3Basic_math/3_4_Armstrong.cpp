/*
Armstrong Number:
    A number is which is equal to the summation of power of each digit with its digit count 

approach:
    using digit separation with % and / operators we cna solve this 
    Time complexity: O(N)
    Space complexity: O(1)


*/


#include<bits/stdc++.h>
using namespace std;

bool armstrong(int n){
    // count the number of digits that number have
    int val = n;
    int count=0;
    while(val>0){
        count++;
        val /= 10;
    }

    int temp = n;
    int sum = 0;
    while(n>0){
        int rem = n % 10;
        sum += pow(rem,  count);
        n /= 10;
    }

    if(sum == temp){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(armstrong(n)){
        cout << n << " is an armstrong number." << endl;
    }else{
        cout << n << " is not an armstrong number." << endl;
    }

    return 0;
}