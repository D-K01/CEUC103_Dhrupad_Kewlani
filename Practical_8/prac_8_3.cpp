/*Practical 8; Aim:To develop modular applications using user-defined and built-in
functions, understand parameter passing mechanisms, implement
recursive solutions, and enhance program readability, reusability,
and maintainability.

Topics Covered in 8.3: Recursive Programming, Base Conditions, Recursive Decomposition, and Comparison of Recursion and Iteration*/

#include <iostream>
using namespace std;

int factorial_Rec(int);
int factorial_It(int);
int fibonacci_Rec(int);
int fibonacci_It(int);
int main() {
    int num, i;
    cin >> num;
    cout<<"Recursive Factorial:  ";
    cout << factorial_Rec(num) <<"\n";
    cout<<"Iterative Factorial:  ";
    cout << factorial_It(num) <<"\n";

    cin>>num;
m :
    if (num < 0) {
        cout << "Please enter a non-negative number.\n";
        goto m;
        }
    cout<<"Recursive Fibonacci:  ";
    for (i=0; i<num; i++) {
        cout<<fibonacci_Rec(i)<<", ";
    }
    if (n==0) goto m;
    cout<<"\nIterative Fibonacci:  ";
    for (i=1; i<=num; i++) {
        cout<<fibonacci_It(i)<<", ";
    }

    return 0;
}
int factorial_Rec(int n) {
    if (n==1 || n==0) {
        return 1;
    }
    return n*factorial_Rec(n-1);
}
int factorial_It(int n) {
    int factorial = 1, i;
    for (i=2; i<=n; i++) {
        factorial = factorial * i;
    }
    return factorial;
}
int fibonacci_Rec(int n) {
    if (n==1 || n==0) {
        return 0;
    }
    return fibonacci_Rec(n-1)+fibonacci_Rec(n-2);
}
int fibonacci_It(int n) {
    if ( n==1) return 0;
    short int i;
    long int a=0, b=1, next_num;

    for (i=3; i<=n; i++) {
        next_num= a+b;
        a = b;
        b = next_num;
    }
    return b;
}
