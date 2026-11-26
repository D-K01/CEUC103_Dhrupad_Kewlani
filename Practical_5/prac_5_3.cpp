/*Practical 5; Aim: To enhance the Student Record Management System by
implementing iterative constructs for repetitive data entry, batch
processing of student records, and continuous execution of
menu-driven operations.

Topics Covered in 5.2: Pattern formation using Loops*/

#include <iostream>

using namespace std;

int main(){
    int rows=4;
    cout<<"1 - Numeric Pattern\n";
    for (int i=1; i<=rows; i++){
        for (int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }

    cout<<"\n2 - Lowercase Alphabet Pattern\n";
    for (int i=1; i<=rows; i++){
        for (int j=1; j<=i; j++){
            cout<<(char)(j+96)<<" ";
        }
        cout<<"\n";
    }

    cout<<"\n3 - Uppercase Alphabet Pattern\n";
    for (int i=1; i<=rows; i++){
        for (int j=1; j<=i; j++){
            cout<<(char)(j+64)<<" ";
        }
        cout<<"\n";
    }

    cout<<"\n4 - Right Half Number Triangle\n";
    for (int i=1; i<=rows; i++){
        for (int j=1; j<=rows-i; j++){
            cout<<"  ";
        }
        for (int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }

    cout<<"\n5 - Full Number Pyramid\n";
    for (int i=1; i<=rows; i++){
        for (int j=1; j<=rows-i; j++){
            cout<<"  ";
        }
        for (int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        for (int j=i-1; j>0; j--){
            cout<<j<<" ";
        }
        cout<<"\n";
    }

    cout<<"\n6 - Full Alphabet Pyramid\n\n";
    for (int i=1; i<=rows; i++){
        for (int j=1; j<=rows-i; j++){
            cout<<"  ";
        }
        for (int j=1; j<=i; j++){
            cout<<(char)(j+64)<<" ";
        }
        for (int j=i-1; j>0; j--){
            cout<<(char)(j+64)<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
