/*
Function:
    it is a block of code which we can reuse when we need the code snippet again
    without code the same thing again and again

    there are two types of arguments in the functions
        1: pass by value -> it only passes the value not the address of the variable its likely a duplicate value

        2: pass by reference -> it passes the reference(addresses) of the variable. any changes happend to the value reflects on the value which is in the address

    Return types:
        int     ->the function should return the integer type
        bool    ->the function should return the boolean type
        string  ->the function should return the string type
        char    ->the function should return the char type
        double  ->the function should return the double type
        float   ->the function should return the float type
        void    ->the function does not return anything
        vector  ->the function should return the vector/array type
        map     ->the function should return the map of values{a, b} type
        .
        .
        .
        .

*/

#include <iostream>
using namespace std;


int Maximum(int x, int y){
    // Write your code here.
    return max(x, y);
}

void Swap(int &x, int &y){
    // Write your code here.
    int temp = x;
    x = y;
    y = temp;
}
int main(){
    int test, a, b, r;
    cin >> test;
    cin >> a >> b;
    switch (test){
    case 1:
        r = Maximum(a, b);
        cout << r;
        break;
    case 2:
        Swap(a, b);
        // as we pass the values by reference. we did not return those value as the change of values reflect on its variable address values.
        cout << a << " " << b;
        break;
    default:
        cout << "Invalid test option";
    }
    return 0;
}