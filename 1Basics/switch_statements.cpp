/*
Switch statements :
It is also comes under control statements

instead of using lots of if, else if, else block we can use switch case statements

syntax:
    switch(expression){
        case value:
            code;
            break;
        case value:
            code;
            break;
        case value:
            code;
            break;
        default:
            code;
            break;
    }

    write a code to print the day which the number(user input) belongs to the respective day of the week
    example:    1 ==== Monday
*/


#include<bits/stdc++.h>
using namespace std;


int main(){
    int num;
    cout << "Enter a number between 1 to 7: ";
    cin >> num;

    switch(num){
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
        default:
            cout << "Check the value You entered";
            break;
    }    
    return 0;
}