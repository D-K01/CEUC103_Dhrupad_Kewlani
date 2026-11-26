/*Practical 9; Aim:To understand address-based data access, pointer arithmetic,
memory organization, multi-level referencing, and dynamic
memory management for developing efficient and memory-safe
applications.

Topics Covered in 9.2: Dynamic Memory Allocation, Pointer Arithmetic, Passong pointers to functions
Dynamic Memory Deallocation, and Resetting Pointers.*/


#include <iostream>

using namespace std;

void display_records(char (*)[9], char (*)[20], char (*)[4], short int *, float *, char (*)[3], short int);
void academic_summary(float *, short int);
int main() {
    short int no_students, *sem, i;
    char (*enroll)[9], (*name)[20], (*branch_ptr)[4], (*grade)[3];
    float *percent;
    cout<<"***********************************************\n";
    cout<<"STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout<<"***********************************************\n";

    cout<<"Enter the number of students: ";
    cin>>no_students;

    enroll= new char [no_students][9];
    name= new char [no_students][20];
    branch_ptr= new char [no_students][4];
    sem= new short int [no_students];
    percent= new float [no_students];
    grade= new char [no_students][3];

    cout<<"Dynamic Memory Allocated Successfully\n";

    cout<<"-------------------------------------------------\n";

    cout<<"Enter Student Details\n";

    for (i=0;i<no_students;i++) {
        cout<<"Student"<<i+1<<"\n";
        cout<<"Enrollment Number: ";
        cin>>enroll[i];
        cout<<"Student Name: ";
        cin>>name[i];
        cout<<"Branch: ";
        cin>>branch_ptr[i];
        cout<<"Semester: ";
        cin>>sem[i];
        cout<<"Percentage: ";
        cin>>percent[i];
        cout<<"Grade: ";
        cin>>grade[i];
        cout<<"\n";
        cout<<"-------------------------------------------------\n";
    }

    cout<<"Student Record Using Address-based Access\n";
    display_records(enroll, name, branch_ptr, sem, percent, grade, no_students);
    cout<<"\n";
    academic_summary(percent, no_students);
    cout<<"-------------------------------------------------\n";

    delete[] enroll;
    delete[] name;
    delete[] branch_ptr;
    delete[] sem;
    delete[] percent;
    delete[] grade;
    cout<<"Dynamic Memory Released Successfully\n";
    enroll = nullptr;
    name = nullptr;
    branch_ptr = nullptr;
    sem = nullptr;
    percent = nullptr;
    grade = nullptr;
    cout<<"Address Variable Reset Successfully\n";
    cout<<"-------------------------------------------------\n";
    cout<<"Program Executed Successfully\n";
    cout<<"-------------------------------------------------\n";

    return 0;
}

void display_records(char (*enroll)[9], char (*name)[20], char (*branch)[4], short int *sem, float *perc, char (*grade)[3], short int n) {
    short int i;
    for (i=0;i<n;i++) {
        cout<<"Address: "<<(enroll+i)<<"\n";
        cout<<*(enroll+i)<<"\t"<<*(name+i)<<"\t"<<*(branch+i)<<"\t"<<*(sem+i)<<"\t"<<*(perc+i)<<"\t"<<*(grade+i)<<"\n";
        cout<<"-------------------------------------------------\n";
    }
}
void academic_summary(float *percent, short int no_students) {
    int sum=0;
    float max_percent, min_percent;
    short int i;
    max_percent=*percent;
    min_percent=*percent;
    for (i=0;i<no_students;i++) {
        sum=sum+*(percent+i);
        if (max_percent<*(percent+i)) {
            max_percent=*(percent+i);
        }
        if (min_percent>*(percent+i)) {
            min_percent=*(percent+i);
        }
    }
    cout<<"Academic Summary\n";
    cout<<"Class Average Percentage: "<<sum/no_students<<"%\n";
    cout<<"Highest Percentage: "<<max_percent<<"%\n";
    cout<<"Lowest Percentage: "<<min_percent<<"%\n";
}
