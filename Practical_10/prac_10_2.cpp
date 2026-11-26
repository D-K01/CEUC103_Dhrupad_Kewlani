/*Practical 10; Aim: To model real-world entities using composite data types,
organize related information efficiently, understand shared
memory composite data representation, analyze padding and
alignment, and evaluate different composite data
representations for efficient software design.

Topics Covered in 10.2:Structure Memory Allocation, Memory Padding And Alignment, sizeof() operator,
Shared Memory Composite Data Types(Union), And Structure vs. Union Trade-Offs.*/

#include<iostream>

using namespace std;

struct product_info {
    char id;
    int price;
    int quantity;
}product;

struct data_a {
    char character;
    int integral_value;
    float decimal_value;
}A;
struct data_b {
    float decimal_value;
    int integral_value;
    char character;
}B;
union shared_data {
    int integral_value;
    float floating_value;
    char char_value;
}shared;
int main() {
    short int total_size;
    product ={'A', 60, 10};
    A={'A', 41, 3.14};
    B={1.617, 25, 'B'};

    cout<<"*****************************************************\n";
    cout<<"COMPOSITE DATA REPRESENTATION ANALYZER\n";
    cout<<"*****************************************************\n";

    cout<<"Product Information\n";
    cout<<"Size of id(char data type): "<<sizeof(product.id)<<"\n";
    cout<<"Size of price(int data type): )"<<sizeof(product.price)<<"\n";
    cout<<"Size of quantity(int data type): "<<sizeof(product.quantity)<<"\n";
    cout<<"Total Size: "<<sizeof(product);

    cout<<"----------------------------------------------------\n";

    cout<<"Padding and Alignment\n";

    cout<<"Composite Data Type A\n";
    cout<<"Size: "<<sizeof(A)<<"\n";

    cout<<"----------------------------------------------------\n";
    cout<<"Composite Data Type B\n";
    cout<<"Size: "<<sizeof(B)<<"\n";

    cout<<"----------------------------------------------------\n";
    cout<<"Padding and Alignment Observed\n";
    cout<<"----------------------------------------------------\n";

    cout<<"Shared Memory Representation\n";

    shared.integral_value=41;
    cout<<"Integer Value: "<<shared.integral_value<<"\n";
    shared.floating_value=8.85;
    cout<<"Floating Value: "<<shared.floating_value<<"\n";
    shared.char_value='B';
    cout<<"Character Value: "<<shared.char_value<<"\n";
    shared.floating_value=4.85;
    cout<<"After Updating Floating Value\n";
    cout<<"Integer Value Changed\n";
    cout<<"character Value Changed\n";
    cout<<"----------------------------------------------------\n";

    cout<<"Trade-off Analysis\n";

    cout<<"Structure\n";
    cout<<"Seperate Memory for Every Member\n";
    cout<<"Suitable for Storing Complete Records\n";

    cout<<"----------------------------------------------------\n";
    cout<<"union\n";
    cout<<"shared Memory for All Members\n";
    cout<<"Suitable for Memory-efficient Applications\n";
    cout<<"----------------------------------------------------\n";
    cout<<"Program Executed Successfully\n";
    cout<<"----------------------------------------------------\n";

    return 0;
}