#include <iostream>

using namespace std;
void stack_var() {
    int local_var=10, *ptr=NULL;

    cout<<"---------------Stack Memory---------------\n";
    cout<<"Local Variable Value\n";
    cout<<local_var;
    cout<<"Memory Address\n";
    cout<<&local_var<<"\n";
    cout<<"-------------------------------------------\n";

    cout<<"---------------Dynamically Allocated Memory--------------\n";

    ptr=new int(250);
    cout<<"Allocated Value\n";
    cout<<*ptr;
    cout<<"Memory Address\n";
    cout<<ptr;
    delete ptr;
    ptr=NULL;
    cout<<"------------------------------------------\n";
}
int main() {
    int a=41, *single_ptr, **double_ptr, ***triple_ptr, *inv_refer, *q;

    cout<<"***************************************\n";
    cout<<"MEMORY ORGANIZATION ANALYZER\n";
    cout<<"***************************************\n";

    stack_var();

    cout<<"----------Multi-level Referencing-----------\n";
    cout<<"Original Value\n";
    cout<<a<<"\n";

    single_ptr=&a;
    double_ptr=&single_ptr;
    triple_ptr=&double_ptr;

    cout<<"Single-level Address\n";
    cout<<single_ptr<<"\n";

    cout<<"Double-level Address\n";
    cout<<double_ptr<<"\n";

    cout<<"Triple-level Address\n";
    cout<<triple_ptr<<"\n";

    cout<<"Value Accessed through Three Levels\n";
    cout<<***triple_ptr<<"\n";
    cout<<"------------------------------------------\n";
    single_ptr=NULL;

    cout<<"--------------Memory Safety----------------\n";

    cout<<"Null Reference\n";

    if (single_ptr==NULL) {
        cout<<"Safe (Reference is NULL)\n";
    }
    else {
        cout<<"Unsafe (Reference is not NULL)\n";
    }
    cout<<"------------------------------------------\n";

    inv_refer=new int(250);

    cout<<"Invalid Reference\n";
    delete inv_refer;
    cout<<"Memory Released Successfully\n";

    if (inv_refer!=NULL) {
        cout<<"Reference Invalid\n";
    }

    else {
        delete inv_refer;
    }
    cout<<"------------------------------------------\n";
    cout<<"Uninitialized Address Variable\n";
    if (q!=NULL) {
        cout<<"Unsafe to Acsess\n";
    }
    cout<<"------------------------------------------\n";

    return 0;
}