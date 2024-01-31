/*
    You are given a number 'n'.
    Return number of digits in ‘n’.
    Example:
    Input: 'n' = 123
    Output: 3
    Explanation:
    The 3 digits in ‘123’ are 1, 2 and 3.


    Brute force :
        using while loop we can iterate the number and count each digit
            time complexity: O(N)
            space complexity: O(1)
    
    Better approach: 
        convert the number in to a string and return its length
        time complexity : O(1)
        space complexity: O(1)

    Optimal approach:
        using logarithmic formula
        Time complexity: 
        space complexity: 
*/

#include<bits/stdc++.h>
using namespace std;

// function to count the number of digits that given number have

// Brute force approach
int count_digits_brute(long long int n){
    int count=0;
    while(n>0){
        count++;
        n /= 10;
    }
    return count;
}


// Better approach
int count_digits_better(long long int n){
    string num = to_string(n);
    return num.length();
}

// Optimal approach
int count_digits_optimal(long long int n){
    return (floor(log10(n)) + 1);
}

int main(){
    long long int input;
    cout << "Enter the input value: ";
    cin>>input;
    
    cout << input << " has " << count_digits_brute(input) << " digits " << endl;

    cout << input << " has " << count_digits_better(input) << " digits " << endl;

    cout << input << " has " << count_digits_optimal(input) << " digits " << endl;

    return 0;
}