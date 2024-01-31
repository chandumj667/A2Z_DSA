/*
If-else statements are used for any conditional statement that the program should control based on the conditions

so to control the structure of the program or the output based on the conditions we need to use the conditional statement

one of the conditional statements are if-else statements


syntax:
    if(expression){
        execute this code
    }
    else {
        execute this code
    }


    we have another thing it is else if

*/


#include<bits/stdc++.h>
using namespace std;


int main(){
    int num;
    cout << "Enter a number: ";

    cin >> num;

    if(num%2 == 0){
        cout << num << "  is an even number" << endl;
    }
    else {
        cout << num << "  is an odd number" << endl;
    }

    return 0;
}