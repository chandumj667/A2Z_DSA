/*
Loops are used to do the operation iteratively until the termination occurs

for loop:
    for(initialisation; condition; increment/decrement){
        //code
    }

While loop:
    initialisation;
    while(condition){
        //code
        increment/decrement;
    }

Do while loop:
    initialisation;
    do{
        // code
        increment/decrement;
    }while(condition);

Recursion is type of a iterative loop until it reaches its base case
Recursion: the function calls itself again and again until it reaches the base case
*/

#include<bits/stdc++.h>
using namespace std;


void for_loop(int inp){
    int a = 1;
    int b = 1;
    int ans;
    if (inp == 1 || inp == 2)
        cout << a;

    else{
        for (int i = 3; i <= inp; i++){
            ans = a + b;
            b = a;
            a = ans;
        }
        cout << ans <<endl;
        
    }
}


void while_loop(){
    int i = 1; 
    while(i<=25){
        if(i%3 == 0 && i%5==0){
            cout <<i<< "ZigZag" << endl;
        }
        else if(i%3==0){
            cout << i << "Zig" << endl;
        }
        else if(i%5==0){
            cout << i << "Zag" << endl;
        }
        else {
            cout << i << endl;
        }
        i++;
    }
}

int main(){
    int n;
    cout << "For loop example (Fibonacci series)" << endl;
    cin >> n;
    for_loop(n);
    cout << "while loop example of 1 to 100 numbers and multiple of 3 & 5" << endl;
    cout << "multiple of 3 as zig and multiple of 5 as zag and multiple of both as zigzag" << endl;
    while_loop();
    return 0;
}

