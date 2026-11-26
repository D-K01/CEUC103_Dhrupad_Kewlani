/*Practical 5; Aim: To enhance the Student Record Management System by
implementing iterative constructs for repetitive data entry, batch
processing of student records, and continuous execution of
menu-driven operations.

Topics Covered in 5.1: for Loop*/

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
   int sub, c, tot_mark=0, mark;
   float avg_mark, percentage;

   cout<<"**********************************"<<endl;
   cout<<"STUDENT RECORD MANAGEMENT SYSTEM"<<endl;
   cout<<"***********************************"<<endl;

   //Asking user to add number of subjects they want to add marks for

   cout<<"Enter Number of Subjects : ";
   cin>>sub;

   for(c=1;c<=sub;c++)
   {
       cout<<"Enter Marks of Subject "<<c<<" : ";
       cin>>mark;
       //Calculating total marks of marks of all the subjects inputted by user/student
       tot_mark = tot_mark + mark;
   }
   avg_mark=tot_mark/3.0;
    percentage=tot_mark/3.0;




    //Showing student/user their result

    cout<<"------------------------------------"<<endl;
     cout<<"Academic Result"<<endl;
     cout<<"------------------------------------"<<endl;

     cout<<left<<setw(15)<<"Total Marks"<<": "<<tot_mark<<endl;
     cout<<left<<setw(15)<<"Average Marks"<<": "<<fixed<<setprecision(2)<<avg_mark<<endl;
     cout<<left<<setw(15)<<"Percentage"<<": "<<fixed<<setprecision(2)<<percentage<<"%"<<endl;


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
     return 0;

}
