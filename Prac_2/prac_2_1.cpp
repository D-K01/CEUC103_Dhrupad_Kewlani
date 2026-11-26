/*Practical 2; Aim: To analyse a real-world computational problem by
identifying inputs, outputs, and processes; applying problem
decomposition; designing algorithms, flowcharts, pseudocode,
and test cases; and developing the initial version of the Student
Record Management System.*/



#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    char sem;
    long long int mob;
    string roll;
    string name;
    string branch;

    //Taking Student Details
    cout<<"Enter your Enrollment Number: "<<endl;
    cin>>roll;
    cin.ignore();

    cout<<"Enter your Name: "<<endl;
    getline(cin, name);
    cin.ignore();

    cout<<"Enter your Branch: "<<endl;
    cin>>branch;
    cin.ignore();

    cout<<"Enter your Semester"<<endl;
    cin>>sem;

    cout<<"Enter your Mobile Number"<<endl;
    cin>>mob;

    //Displaying Student Details Entered Above
    cout<<"*********************************"<<endl;
    cout<<"Student Information"<<endl;
    cout<<"*********************************"<<endl;

    cout<<left<<setw(27)<<"Your Enrollment Number is"<<": "<<roll<<endl;
    cout<<left<<setw(27)<<"Your Name is"<<": "<<name<<endl;
    cout<<left<<setw(27)<<"Your Branch is"<<": "<<branch<<endl;
    cout<<left<<setw(27)<<"Your Semester is"<<": "<<sem<<endl;
    cout<<left<<setw(27)<<"Your Mobile Number is"<<": "<<mob<<endl;

    return 0;
}
