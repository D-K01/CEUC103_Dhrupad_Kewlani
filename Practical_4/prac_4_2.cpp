/*Practical 4; Aim: To enhance the Student Record Management System by
implementing decision-making constructs for evaluating student
performance and developing a menu-driven application.

Topics Covered in 4.2: else-if Ladder*/



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



    //Taking input from student for their marks in Maths, Physics and Computer programming Foundation

    cout<<"------------------------------------"<<endl;
    cout<<"Academic Information"<<endl;
    cout<<"------------------------------------"<<endl;

    m :  cout<<left<<setw(36)<<"Enter Mathematics Marks"<<": ";
    cin>>math_mark;
    cout<<left<<setw(36)<<"Enter Physics Marks"<<": ";
    cin>>phy_mark;
    cout<<left<<setw(36)<<"Enter Programming Foundation Marks"<<": ";
    cin>>progFound_mark;

    //Checking if the student/user has inputted marks in valid range

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

     if(percentage>=90)
     {
         cout<<left<<setw(15)<<"Result"<<": "<<"PASS"<<endl;
         cout<<left<<setw(15)<<"Grade"<<": "<<"O"<<endl;
         cout<<left<<setw(15)<<"Performance"<<": "<<"Outstanding"<<endl;
     }
     else if(percentage>=80)
     {
         cout<<left<<setw(15)<<"Result"<<": "<<"PASS"<<endl;
         cout<<left<<setw(15)<<"Grade"<<": "<<"A+"<<endl;
         cout<<left<<setw(15)<<"Performance"<<": "<<"Excellent"<<endl;
     }
     else if(percentage>=70)
     {
         cout<<left<<setw(15)<<"Result"<<": "<<"PASS"<<endl;
         cout<<left<<setw(15)<<"Grade"<<": "<<"A"<<endl;
         cout<<left<<setw(15)<<"Performance"<<": "<<"Very Good"<<endl;
     }
     else if(percentage>=60)
     {
         cout<<left<<setw(15)<<"Result"<<": "<<"PASS"<<endl;
         cout<<left<<setw(15)<<"Grade"<<": "<<"B+"<<endl;
         cout<<left<<setw(15)<<"Performance"<<": "<<"Good"<<endl;
     }
     else if(percentage>=50)
     {
         cout<<left<<setw(15)<<"Result"<<": "<<"PASS"<<endl;
         cout<<left<<setw(15)<<"Grade"<<": "<<"B"<<endl;
         cout<<left<<setw(15)<<"Performance"<<": "<<"Satisfactory"<<endl;
     }
     else if(percentage>=40)
     {
         cout<<left<<setw(15)<<"Result"<<": "<<"PASS"<<endl;
         cout<<left<<setw(15)<<"Grade"<<": "<<"C"<<endl;
         cout<<left<<setw(15)<<"Performance"<<": "<<"Needs Improvement"<<endl;
     }
     else
     {
         cout<<left<<setw(15)<<"Result"<<": "<<"FAIL"<<endl;
         cout<<left<<setw(15)<<"Grade"<<": "<<"F"<<endl;
         cout<<left<<setw(15)<<"Performance"<<": "<<"Failed"<<endl;
     }

    cout<<"------------------------------------"<<endl;

    return 0;
}
