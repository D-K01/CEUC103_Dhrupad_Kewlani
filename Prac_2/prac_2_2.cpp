#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    string enrol_no, name, branch;
    short int sem;
    long int mob_no;

    cout<<"**************************************************\n";
    cout<<"\tSTUDENT RECORD MANAGEMENT SYSTEM\n";
    cout<<"*************************************************\n";

    cout<<"Software Version: "<<left<<setw(20)<<"1.1"<<"\n";
    cout<<"Institute"<<left<<setw(20)<<": CHARUSAT University"<<"\n";
    cout<<"Academic Year"<<left<<setw(20)<<": 2026-27"<<"\n";

    cout<<"-------------------------------------------------\n";
    cout<<"Student Registration\n";
    cout<<"----------------------------------------------------\n";

    cout<<"Enter Enrollment Number : ";
    cin>>enrol_no;
    cout<<"Enter Student Name : ";
    cin.ignore();
    getline(cin, name);
    cout<<"Enter Branch : ";
    cin>>branch;
    cout<<"Enter Semester : ";
    cin>>sem;
    cout<<"Enter Mobile Number : ";
    cin>>mob_no;

    cout<<"----------------------------------------------------\n";
    cout<<"Student Information\n";
    cout<<"----------------------------------------------------\n";

    cout<<"Enrollment Number : "<<left<<setw(20)<<enrol_no<<"\n";
    cout<<"Student Name : "<<left<<setw(20)<<name<<"\n";
    cout<<"Branch : "<<left<<setw(20)<<branch<<"\n";
    cout<<"Semester : "<<left<<setw(20)<<sem<<"\n";
    cout<<"Mobile Number : "<<left<<setw(20)<<mob_no<<"\n";
    cout<<"----------------------------------------------------\n";
    return 0;
}