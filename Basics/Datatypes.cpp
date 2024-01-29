/*
Data type : It represents the type of value that a variable holds

int:    4 bytes
long:   8 bytes
float:  4 bytes
double: 8 bytes
char:   1 byte

print the number of bytes that given input datatype has

example:
    int :   4
    double: 8
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string inp;
    cout << "Enter the datatype: ";
    cin >> inp;

    if(inp == "int")cout << 4;

    else if (inp == "float")cout << 4;

    else if (inp == "double")cout << 8;

    else if (inp == "long")cout << 8;

    else if(inp=="char")cout << 1;

    else if(inp =="bool")cout << 1;
    
    return 0;
}