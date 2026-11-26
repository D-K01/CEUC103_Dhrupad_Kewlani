/*Practical 4; Aim: To enhance the Student Record Management System by
implementing decision-making constructs for evaluating student
performance and developing a menu-driven application.

Topics Covered in 4.1: Conditional Statements
 Simple if
 if-else*/

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



    //Taking input of marks

    cout<<"------------------------------------"<<endl;
    cout<<"Academic Information"<<endl;
    cout<<"------------------------------------"<<endl;

    m :  cout<<left<<setw(36)<<"Enter Mathematics Marks"<<": ";
    cin>>math_mark;
    cout<<left<<setw(36)<<"Enter Physics Marks"<<": ";
    cin>>phy_mark;
    cout<<left<<setw(36)<<"Enter Programming Foundation Marks"<<": ";
    cin>>progFound_mark;

    if(math_mark<0||math_mark>100||phy_mark<0||phy_mark>100||progFound_mark<0||progFound_mark>100)
    {
        cout<<"Invalid Marks Entered"<<endl;
        goto m;
    }
    else {

    //calculating total marks, Average marks and Percentage

    tot_mark=math_mark+phy_mark+progFound_mark;
    avg_mark=tot_mark/3.0;
    percentage=tot_mark/3.0;
    }

     cout<<"------------------------------------"<<endl;
     cout<<"Academic Summary"<<endl;
     cout<<"------------------------------------"<<endl;

     cout<<left<<setw(15)<<"Total Marks"<<": "<<tot_mark<<endl;
     cout<<left<<setw(15)<<"Average Marks"<<": "<<fixed<<setprecision(2)<<avg_mark<<endl;
     cout<<left<<setw(15)<<"Percentage"<<": "<<fixed<<setprecision(2)<<percentage<<"%"<<endl;



    //Showing student/user their result

    cout<<"------------------------------------"<<endl;
     cout<<"Academic Result"<<endl;
     cout<<"------------------------------------"<<endl;

     if(percentage>=40)
     {
         cout<<left<<setw(15)<<"Result"<<": "<<"Pass"<<endl;
         cout<<"Congratulations! You have successfully passed."<<endl;
     }
     else
     {
         cout<<left<<setw(15)<<"Result"<<": "<<"Fail"<<endl;
         cout<<"You have failed."<<endl;
     }

    cout<<"------------------------------------"<<endl;

    return 0;
}
