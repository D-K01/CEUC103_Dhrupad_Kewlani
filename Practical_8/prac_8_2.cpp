/*Practical 8; Aim:To develop modular applications using user-defined and built-in
functions, understand parameter passing mechanisms, implement
recursive solutions, and enhance program readability, reusability,
and maintainability.

Topics Covered in 8.2: Categories of user-defined functions,Call by Value, Call by reference, variable scope and
visibility and Function Overloading*/


#include <cstring>
#include<iostream>
using namespace std;

short int global_var=200;

void prod_no_para_no_ret();
int prod_no_para_ret();
void sum_para_no_ret(int, int);
int sum_para_ret(int, int);
void num_swapper(int, int);
void num_square(int &, int &);
void display_scope();
void display(char name_arr[], char enroll_arr[]);
void display(char name_arr[], char enroll_arr[], char branch_arr[], short int marks_arr[], int size,
    short int total, float per );
void display(char name_arr[], char enroll_arr[], char branch_arr[], short int marks_arr[], int size,
    short int total, float per, long int phone, char email_arr[]);

int main() {
    int x1=3, x2=4, ans;
    short int main_local_var=300, marks[3]={89,91,90}, total_marks;
    char name[20], enroll_id[8], student_email[25], branch[4];
    long int student_phone_no=9999999999;
    float percentage;

    cout<<"Function without Parameters and without Return Value\n";
    prod_no_para_no_ret();

    cout<<"Function without Parameters and with Return Value\n";
    ans = prod_no_para_ret();
    cout << ans << "\n";

    cout<<"Function with Parameters and without Return value\n";
    sum_para_no_ret(x1, x2);

    cout<<"Function with Parameters and with Return value\n";
    ans=sum_para_ret(x1, x2);
    cout << ans << "\n";

    cout<<"Call by Value\n";
    num_swapper(x1, x2);

    cout<<"Call by Reference\n";
    num_square(x1, x2);
    cout<<x1<<"\t"<<x2<<"\n";

    display_scope();

    cout<<global_var<<"\n";
    cout<<main_local_var<<"\n";

    strcpy(name, "Ravi Patel");
    strcpy(enroll_id, "26CE001");
    strcpy(student_email, "ravipatel.ce@gmail.com");
    strcpy(branch, "CE");
    total_marks = marks[0] + marks[1] + marks[2];
    percentage = total_marks / 3.0;

    display(name, enroll_id);
    display(name, enroll_id, branch, marks, 3, total_marks, percentage);
    display(name, enroll_id, branch, marks, 3, total_marks, percentage, student_phone_no, student_email);
    return 0;
}
void prod_no_para_no_ret() {
    short int x1, x2;
    cin >> x1 >> x2;
    cout << x1 * x2 <<"\n";
}
int prod_no_para_ret() {
    short int x1, x2, product;
    cin >> x1 >> x2;
    product = x1 * x2;
    return product;
}
void sum_para_no_ret(int a, int b) {
    int sum;
    sum = a + b;
    cout << sum << "\n";
}
int sum_para_ret(int a, int b) {
    int sum;
    sum = a + b;
    return sum;
}
void num_swapper(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << a << "\n";
    cout << b << "\n";
}
void num_square(int &a, int &b) {
    a=a*a;
    b=b*b;
}
void display_scope() {
    short int func_local_var=400;

    cout<<global_var<<"\n";
    cout<<func_local_var<<"\n";
}
void display(char name_arr[], char enroll_arr[]) {
    cout<<name_arr<<"\n";
    cout<<enroll_arr<<"\n";
}
void display(char name_arr[], char enroll_arr[], char branch_arr[], short int marks_arr[], int size, short int total, float per )
{
    short int i;
    cout<<name_arr<<"\n";
    cout<<enroll_arr<<"\n";
    cout<<branch_arr<<"\n";
    for(i=0; i<size; i++) {
        cout<<marks_arr[i]<<"\n";
    }
    cout<<total<<"\n";
    cout<<per<<"\n";
}
void display(char name_arr[], char enroll_arr[], char branch_arr[], short int marks_arr[], int size, short int total, float per,
long int phone, char email_arr[]) {
    short int i;
    cout<<name_arr<<"\n";
    cout<<enroll_arr<<"\n";
    cout<<branch_arr<<"\n";
    for(i=0; i<size; i++) {
        cout<<marks_arr[i]<<"\n";
    }
    cout<<total<<"\n";
    cout<<per<<"\n";
    cout<<phone<<"\n";
    cout<<email_arr<<"\n";
}