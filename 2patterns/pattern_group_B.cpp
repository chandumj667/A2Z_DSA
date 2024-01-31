/*
pattern7:
    Input: ‘N’ = 3
    Output:
      *
     ***
    *****


pattern8:
    Input: ‘N’ = 3
    Output:
    *****
     ***
      *


pattern9:
    Input: ‘N’ = 3
    Output:
      *
     ***
    *****
    *****
     ***
      *


pattern10:
    Input: ‘N’ = 3
    Output:
    *
    **
    ***
    **
    *

pattern11:
    Input: ‘N’ = 5
    Output:
    1
    0 1
    1 0 1
    0 1 0 1
    1 0 1 0 1


pattern12:
    Input: ‘N’ = 3
    Output:
    1         1
    1 2     2 1
    1 2 3 3 2 1

pattern13:
    Input: ‘N’ = 3
    Output:
    1
    2 3
    4 5 6

pattern14:


*/

#include<bits/stdc++.h>
using namespace std;


// pattern7
void pattern7(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - i - 1; j++){
            cout << " ";
        }

        for (int j = 0; j < i * 2 + 1; j++){
            cout << "*";
        }

        cout << endl;
    }
}

// pattern8
void pattern8(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++){
            cout << " ";
        }

        for (int j = 0; j < 2*n-(2*i+1); j++){
            cout << "*";
        }

        cout << endl;
    }
}

// pattern9
void pattern9(int n){
    // pattern9 is the combination of pattern7 and pattern9
    pattern7(n);
    pattern8(n);
}

// pattern10
void pattern10(int n){
    for (int i = 1; i <= 2 * n - 1; i++){
        int stars = i;
        if(i>n)
            stars = 2 * n - i;
        for (int j = 1; j <= stars; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

// pattern11
void pattern11(int n){
    int num = 1;
    for (int i = 0; i<n; i++){
        if(i%2==0)
            num = 1;
        else
            num = 0;
        for (int j = 0; j <= i; j++){
            cout << num << " ";
            num = 1 - num;
        }
        cout << endl;
    }
}

// pattern12
void pattern12(int n){
    int sp = 2 * (n - 1);
    for (int i = 1; i<=n; i++){
        for (int j = 1; j <= i; j++){
            cout << j << " ";
        }
        for (int j = 1; j <= sp; j++){
            cout << "  ";
        }
        for (int j = i; j >= 1; j--){
            cout << j << " ";
        }
        sp -= 2;
        cout << endl;
    }
}

// pattern13
void pattern13(int n){
    int num = 1;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cout << num << " ";
            num += 1;
        }
        cout << endl;
    }
}




int main(){
    int row;
    cout << "Enter the number of rows: ";
    cin>>row;
    cout << "Printing Pattern 7" << endl;
    pattern7(row);cout << endl;

    cout << "Printing Pattern 8" << endl;
    pattern8(row);cout << endl;

    cout << "Printing Pattern 9" << endl;
    pattern9(row);cout << endl;
    
    cout << "Printing Pattern 10" << endl;
    pattern10(row);cout << endl;

    cout << "Printing Pattern 11" << endl;
    pattern11(row);cout << endl;

    cout << "Printing Pattern 12" << endl;
    pattern12(row);cout << endl;

    cout << "Printing Pattern 13" << endl;
    pattern13(row);cout << endl;
}