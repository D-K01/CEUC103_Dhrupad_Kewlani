/*Practical 9; Aim:To understand address-based data access, pointer arithmetic,
memory organization, multi-level referencing, and dynamic
memory management for developing efficient and memory-safe
applications.

Topics Covered in 9.1: Pointers, Indirect Referencing, and Pointer-based Array access vs. Array Indexing.*/

#include<iostream>

using namespace std;

int main() {
    int a=41, *p, arr[5]={10,20,30,40,50};
    short int i;
    char c='D';
    float b=3.14;

    cout<<"**********************************************\n";
    cout<<"MEMORY ADDRESS EXPLORER\n";
    cout<<"**********************************************\n";

    cout<<"------------Variable Information---------------\n";
    cout<<"Integer Value: "<<a<<"\n";
    cout<<"Memory Address: "<<&a<<"\n";

    cout<<"------------------------------------------------\n";
    cout<<"Character Value: "<<c<<"\n";
    cout<<"Memory Address: "<<&c<<"\n";

    cout<<"------------------------------------------------\n";
    cout<<"Floating Value: "<<b<<"\n";
    cout<<"Memory Address: "<<&b<<"\n";
    cout<<"------------------------------------------------\n";

    cout<<"Indirect Referencing\n";
    p=&a;
    cout<<"Stored Value: "<<*p<<"\n";
    *p = 25;
    cout<<"Modified Value: "<<*p<<"\n";
    cout<<"-------------------------------------------------\n";

    cout<<"Sequential Data Collection\n";
    cout<<"Array Using Index\n";
    for (i=0;i<5;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    cout<<"Array Using Address-based Access\n";
    for (i=0;i<5;i++) {
        cout<<*(arr+i)<<" ";
    }
    cout<<"\n";
    cout<<"-------------------------------------------------\n";
    cout<<"Observation\n";
    cout<<"Both the approaches access the same memory location\n";

    cout<<"-------------------------------------------------\n";
    return 0;
}