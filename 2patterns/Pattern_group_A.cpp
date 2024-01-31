/*
pattern1:
    Input: ‘N’ = 3
    Output:
    * * *
    * * *
    * * *

pattern2:
    Input:  ‘N’ = 3
    Output:
    *
    * *
    * * *

pattern3:
    input: ‘N’ = 3
    Output:
    1
    1 2
    1 2 3


pattern4:
    Input: ‘N’ = 3
    Output:
    1
    2 2
    3 3 3


pattern5:
    Input: ‘N’ = 3
    Output:
    * * *
    * *
    *

pattern6:
    Input: ‘N’ = 3
    Output:
    1 2 3
    1 2
    1

pattern7:


*/

#include<bits/stdc++.h>
using namespace std;


// pattern1
void pattern1(int n){
    for(int i=0; i<n; i++){
        for (int j = 0; j < n; j++){
            cout << "* ";

        }
        cout << endl;
    }
}

// pattern2
void pattern2(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}


// pattern3
void pattern3(int n){
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}


// pattern4
void pattern4(int n){
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cout << i << " ";
        }
        cout << endl;
    }
}


// pattern5
void pattern5(int n){
    for (int i = n; i > 0; i--){
        for (int j = 0; j < i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

// pattern6
void pattern6(int n){
    for (int i = n; i > 0; i--){
        for (int j = 1; j <= i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}




int main(){
    int row;
    cout << "enter number of rows: ";
    cin >> row;
    
    cout << "Printing Pattern 1" << endl;
    pattern1(row);cout<<endl;

    cout << "Printing Pattern 2" << endl;
    pattern2(row);cout<<endl;
    
    cout << "Printing Pattern 3" << endl;
    pattern3(row);cout<<endl;
    
    cout << "Printing Pattern 4" << endl;
    pattern4(row);cout<<endl;
    
    cout << "Printing Pattern 5" << endl;
    pattern5(row);cout<<endl;
    
    cout << "Printing Pattern 6" << endl;
    pattern6(row);cout<<endl;
}