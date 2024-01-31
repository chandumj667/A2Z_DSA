/*
IN C++:
    we use cin>> and cout<< for input and output the content from and to user respectively

IN Python:
    We use input() and print() functions respectively

*/

/*
write a program to take the input of a character.
if the character is lower case alphabet then display it is lower case letter 
if the character is upper case alphabet then display it is upper case letter
if the character is not an alphabet then display as it is not an alphabet

example:
    c --> lower case letter
    C --> Upper case letter
    4 --> Not an alphabet
*/

#include<bits/stdc++.h>
using namespace std;


int main(){
    char inp;
    cout << "Enter a character : ";
    cin >> inp;

    if(inp>='a' && inp<='z'){
        cout << "{ " << inp << " } is a Lower case letter " << endl;
    }

    else if (inp >= 'A' && inp <= 'Z'){
        cout <<"{ " << inp  << " } is a Upper case letter " << endl;
    }

    else {
        cout << "{ " << inp << " } is Not a alphabet " << endl;
    }

    return 0;
}