/*Practical 11; Aim: To understand program execution, compile-time and run-time
memory management, common low-level programming errors,
and implement appropriate error-handling techniques for
developing reliable software applications.

Topics Covered in 11.1: Compile-Time vs Run-time Memory Management, Low-Level Programming Errors,
Input Validation, Division-by-zero Handling, and File Open Error Handling.*/

#include<iostream>
#include<fstream>

using namespace std;
int global_var=10;
int main() {
    int main_local_var=20, *ptr, *ptr2, dividend, divisor;
    short int arith_overflow=32765;
    ptr=new int(30);

    cout<<"******************************************\n";
    cout<<"PROGRAM EXECUTION & ERROR HANDLING ANALYZER\n";
    cout<<"*******************************************\n";

    cout<<"Compile-time and Run-time Memory\n";
    cout<<"Global Variable value: "<<global_var<<"\n";
    cout<<"Local Variable value: "<<main_local_var<<"\n";
    cout<<"Dynamic Memory value: "<<*ptr<<"\n";
    delete ptr;
    ptr=NULL;
    cout<<"---------------------------------------------\n";
    cout<<"Low-level Error Demonstration\n";
    arith_overflow+=5;
    if(arith_overflow<0) {
        cout<<"Arithmetic Overflow Observed\n";
    }
    else {
        cout<<"Arithmetic Overflow Not Observed\n";
    }
    cout<<"---------------------------------------------\n";
    cout<<"Pointer Aliasing\n";
    cout<<"Original Value: "<<main_local_var<<"\n";
    ptr=&main_local_var;
    ptr2=&main_local_var;
    *ptr=41;
    cout<<"Updated Value: "<<*ptr2<<"\n";
    cout<<"Both Address Variables Refer to the Same Memory Location\n";
    ptr=NULL;
    cout<<"---------------------------------------------\n";
    cout<<"Memory Leak Demonstration\n";
    ptr=new int(30);
    cout<<"Dynamic Memory Allocated\n";
    delete ptr;
    ptr=NULL;
    cout<<"Memory Released Successfully\n";
    cout<<"---------------------------------------------\n";
    cout<<"Arithmetic Operation\n";
    cout<<"Enter Dividend: ";
    cin>>dividend;
    cout<<"Enter Divisor: ";
    cin>>divisor;
    if (divisor==0) {
        cout<<"Error: Division by Zero is not Allowed\n";
    }
    else {
        cout<<dividend/divisor<<"\n";
    }
    cout<<"---------------------------------------------\n";

    cout<<"File Operation\n";
    ifstream file("document.txt");
    if (!file.is_open()) {
        cout<<"Unable to Open file\n";
    }
    file.close();
    cout<<"---------------------------------------------\n";
    cout<<"Program Executed Successfully\n";
    cout<<"---------------------------------------------";

    return 0;
}
