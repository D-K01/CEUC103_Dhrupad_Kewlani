/*Practical 3; Aim: To understand programming paradigms, language hierarchy,
language processors, compiler phases, program execution,
coding standards, error identification, and code optimization by
enhancing the Student Record Management System.*/



#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    char sem;
    int math_mark, phy_mark, progFound_mark, tot_mark;
    float avg_mark, percentage;
    long int mob;
    string roll;
    string name;
    string branch;

    cout<<"**********************************"<<endl;
    cout<<"STUDENT RECORD MANAGEMENT SYSTEM"<<endl;
    cout<<"**********************************"<<endl;

    cout<<"------------------------------------"<<endl;
    cout<<"Student Registration"<<endl;
    cout<<"------------------------------------"<<endl;

    //TAking Student Details as Input.
    cout<<"Enter your Enrollment Number: ";
    cin>>roll;
    cin.ignore();

    cout<<"Enter your Name: ";
    getline(cin, name);
    cin.ignore();

    cout<<"Enter your Branch: ";
    cin>>branch;
    cin.ignore();

    cout<<"Enter your Semester : ";
    cin>>sem;

    cout<<"Enter your Mobile Number : ";
    cin>>mob;

    cin.ignore();

    //Taking Marks for Subjects Mathematics, Physics & Programming Foundation.
    cout<<"------------------------------------"<<endl;
    cout<<"Academic Information"<<endl;
    cout<<"------------------------------------"<<endl;

    cout<<left<<setw(36)<<"Enter Mathematics Marks"<<": ";
    cin>>math_mark;
    cout<<left<<setw(36)<<"Enter Physics Marks"<<": ";
    cin>>phy_mark;
    cout<<left<<setw(36)<<"Enter Programming Foundation Marks"<<": ";
    cin>>progFound_mark;

    //Calculating Total Marks, Average Marks & Percentage
    tot_mark=math_mark+phy_mark+progFound_mark;
    avg_mark=tot_mark/3.0;
    percentage=tot_mark/3.0;

    //Displaying Student's Academic Summary Along with his/her Details.
     cout<<"------------------------------------"<<endl;
     cout<<"Academic Summary"<<endl;
     cout<<"------------------------------------"<<endl;

     cout<<left<<setw(15)<<"Total Marks"<<": "<<tot_mark<<endl;
     cout<<left<<setw(15)<<"Average Marks"<<": "<<fixed<<setprecision(2)<<avg_mark<<endl;
     cout<<left<<setw(15)<<"Percentage"<<": "<<fixed<<setprecision(2)<<percentage<<"%"<<endl;

    cout<<"------------------------------------"<<endl;
    cout<<"Student Information"<<endl;
   cout<<"------------------------------------"<<endl;
    cout<<left<<setw(27)<<"Your Enrollment Number is"<<": "<<roll<<endl;
    cout<<left<<setw(27)<<"Your Name is"<<": "<<name<<endl;
    cout<<left<<setw(27)<<"Your Branch is"<<": "<<branch<<endl;
    cout<<left<<setw(27)<<"Your Semester is"<<": "<<sem<<endl;
    cout<<left<<setw(27)<<"Your Mobile Number is"<<": "<<mob<<endl;

    cout<<"------------------------------------"<<endl;

    return 0;
}
