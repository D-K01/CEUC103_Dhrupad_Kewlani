/*Practical 8; Aim:To develop modular applications using user-defined and built-in
functions, understand parameter passing mechanisms, implement
recursive solutions, and enhance program readability, reusability,
and maintainability.

Topics Covered in 8.4: Recursive Traversal, Recursive Number Processing, and Decimal-to-Binary Conversion using recursion.*/


#include <iostream>

using namespace std;

void traversal(int);
void traversal_rev(int);
int number_rev(int, int);
int number_add(int, int);
void decimal_to_binary(int);
int main()
{
    int N, a;

    m : cin >> N;

    if (N<1) {
        cout<<"Invalid number";
        goto m;
    }
    traversal(N);
    cout<<"\n";
    traversal_rev(N);
    cout<<"\n";
    cin>>N;
    a=number_rev(N, 0);
    cout<<a<<"\n";

    cout<<number_add(N, 0)<<"\n";

    cin>>N;
    decimal_to_binary(N);

    return 0;
}
void traversal(int num) {
    if (num==0) return;
    traversal(num-1);
    cout << num << " ";

}
void traversal_rev(int num) {

    if (num==0) return;
    cout << num << " ";

    traversal_rev(num-1);
}
int number_rev(int num, int rev=0) {
    if (num==0) {
        return rev;
    }
    return number_rev(num/10, rev*10+(num%10));
}
int number_add(int num, int add=0) {
    if (num==0) {
        return add;
    }
    return number_add(num/10, add+(num%10));
}
void decimal_to_binary(int num) {
    if (num==0) {
        return;
    }
    decimal_to_binary(num/2);
    cout<<num%2;
}