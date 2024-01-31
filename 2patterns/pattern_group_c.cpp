/*
pattern14
    Input: ‘N’ = 3
    Output:
    A
    A B
    A B C

pattern15
    Input: ‘N’ = 3
    Output:
    A B C
    A B
    A

pattern16
    Input: ‘N’ = 3
    Output:
    A
    B B
    C C C

pattern17
    Input: ‘N’ = 3
    Output:
        A
      A B A
    A B C B A


pattern18
    Input: ‘N’ = 3
    Output:
    C
    C B
    C B A

*/

#include<bits/stdc++.h>
using namespace std;

// pattern14
void pattern14(int n){
    // for(int i=0; i<n; i++){
    //     for (char j = 'A'; j <= 'A' + i; j++){
    //         cout << j << " ";
    //     }
    //     cout<<endl;
    // }

    char c = 'A';
    for (int i = 0; i<n; i++){
        for (int j = 0; j <= i; j++){
            cout << c << " ";
            c += 1;
        }
        c = 'A';
        cout << endl;
    }
}

// pattern15
void pattern15(int n){
    for (int i = 0; i <n; i++){
        for (char j = 'A'; j <= 'A'+(n-i-1); j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

// pattern16
void pattern16(int n){
    char c = 'A';
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            cout << c << " ";
        }
        c += 1;
        cout << endl;
    }
}

// pattern17
void pattern17(int n){
    for (int i = 1; i <= n; i++){

        for (int j = 0; j < n - i; j++){
            cout << "  ";
        }

        char ch = 'A';
        for (int j = 0; j < i; j++){
            cout << ch << " ";
            ch++;
        }

        ch = ch - 2;

        for (int j = 0; j < i - 1; j++){
            cout << ch << " ";
            ch--;
        }
        cout << endl;
    }
}

// pattern18
void pattern18(int n){
    for (int i = 1; i <= n; i++){
        char ch = 'A' + n - 1;

        for (int j = 1; j <= i; j++){
            cout << ch << " ";
            ch--;
        }
        cout << endl;
    }
}



int main(){
    int row;
    cout << "Enter the number of rows: ";
    cin >> row;

    cout << "Printing pattern14 " << endl;
    pattern14(row);cout << endl;
    
    cout << "Printing pattern15 " << endl;
    pattern15(row);cout << endl;
    
    cout << "Printing pattern16 " << endl;
    pattern16(row);cout << endl;
    
    cout << "Printing pattern17 " << endl;
    pattern17(row);cout << endl;
    
    cout << "Printing pattern18 " << endl;
    pattern18(row);cout << endl;
}