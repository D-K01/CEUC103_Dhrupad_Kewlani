/*Practical 8; Aim:To develop modular applications using user-defined and built-in
functions, understand parameter passing mechanisms, implement
recursive solutions, and enhance program readability, reusability,
and maintainability.

Topics Covered in 8.1: Modular Programming, User-Defined Functions, Passing array to functions*/

#include <cstring>
#include<iostream>
#include<string>

using namespace std;
void display_header();
void accept_student_details();
void calculate_result();
void display_student_report();

char enroll_no[8], student_name[20], branch[4], grade[3], result[5];
short int sem, marks[5], total_marks=0, i;
float percentage;
int main() {

    display_header();

    accept_student_details();
    calculate_result();
    display_student_report();
    cout<<"------------------------------------------------\n";
    cout<<"Program Executed Successfully Using User-defined Functions\n";
    cout<<"------------------------------------------------\n";
    return 0;
}

void display_header() {
    cout<<"******************************************\n";
    cout<<"STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout<<"******************************************\n";
}
void accept_student_details() {
    cout<<"-----------Student Registration-----------\n";

    cout<<"Enter Enrollment Number: ";
    cin>>enroll_no;
    cout<<"Enter student name: ";
    cin.ignore();
    cin.getline(student_name, 20);
    cout<<"Enter branch: ";
    cin>>branch;
    cout<<"Enter Semester: ";
    cin>>sem;

    cout<<"Enter marks: ";
    for (i=0;i<5;i++) {
        cout<<"Subject "<<i+1<<": ";
        cin>>marks[i];
    }

    cout<<"------------------------------------------------\n";
}
void calculate_result() {
    for (i=0;i<5;i++) {
        total_marks=total_marks+marks[i];
    }
    percentage=total_marks/5.0;

    if (percentage>=90) {
        strcpy(grade, "O");
    }
    else if (percentage>=80) {
        strcpy(grade, "A+");
    }
    else if (percentage>=70) {
        strcpy(grade, "A");
    }
    else if (percentage>=60) {
        strcpy(grade, "B+");
    }
    else if (percentage>=50) {
        strcpy(grade, "B");
    }
    else if (percentage>=40) {
        strcpy(grade, "C");
    }
    else {
        strcpy(grade, "F");
    }
    if (percentage>=40) {
        strcpy(result, "PASS");
    }
    else {
        strcpy(result, "FAIL");
    }
}
void display_student_report() {
    cout<<"Academic Report\n";
    cout<<"------------------------------------------------\n";

    cout<<"Enrollment Number: "<<enroll_no<<"\n";
    cout<<"Student Name: "<<student_name<<"\n";
    cout<<"Branch: "<<branch<<"\n";
    cout<<"Semester: "<<sem<<"\n";
    cout<<"Total marks: "<<total_marks<<"\n";
    cout<<"Percentage: "<<percentage<<"%\n";
    cout<<"Grade: "<<grade<<"\n";
    cout<<"Result: "<<result<<"\n";
}