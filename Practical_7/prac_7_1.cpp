/*Practical 7; Aim:To implement string processing techniques using character arrays
and standard string functions for concatenation, extraction,
pattern matching, and text manipulation, and integrate these
operations into the Student Record Management System.

Topics Covered in 7.1: Character Arrays */

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    char en_no[8], name[25], branch[4], student_reference[34], first_name[13], last_name[13],
         keyword[25];
    short int i, n, j, F, name_len=0, space_count=0;

    cout<<"**********************************************\n";
    cout<<"STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout<<"**********************************************\n";

    //Taking Student Details as Input
    cout<<"Enter Enrollment Number: ";
    cin>>en_no;
    n : cout<<"Enter Student Name: ";
    cin.ignore();
    cin.getline(name, 25);
    while (name[name_len]!='\0') {
        if (name[name_len]==' ') {
            space_count ++;
        }
        name_len++;
    }

    //Requesting User to input the Name in the order: First_Name Last_name
    if (name_len<3 || space_count!=1 || name[0]==' ' || name[name_len-1]==' ')
    {
        cout<<"Enter first name and last name separated by space\n";
    }
    cout<<"Enter Branch: ";
    cin>>branch;

    cout<<"-------------------------------------\n";

    //Generating Student_reference ID
    cout<<"Student-reference\n";

    for(i=0;name[i]!='\0';i++)
    {
        student_reference[i]=name[i];
    }
    student_reference[i]= '-';
    for(i=i+1, j=0;en_no[j]!='\0';i++, j++)
    {
        student_reference[i]=en_no[j];
    }
    cout<<student_reference<<"\n";

    cout<<"-------------------------------------\n";
    //Displaying Student's First NAme and Last Name
    cout<<"First Name\n";

    for(i=0;name[i]!=' ';i++)
    {
        first_name[i]=name[i];
    }
    first_name[i]='\0';
    cout<<first_name<<"\n";
     cout<<"Last Name\n";
    for(i=i+1, j=0;name[i]!='\0';i++, j++)
    {
        last_name[j]=name[i];
    }
    last_name[j]='\0';
    cout<<last_name<<"\n";

    cout<<"-------------------------------------\n";

    //Searching for KeyWord in The inputted Array
    cout<<"Enter Keyword : ";
    key : cin>>keyword;
    i=0;
    j=0;
    while(name[i]!='\0'&&keyword[j]!='\0')
    {
        if(name[i]==keyword[j])
        {
            j++;
        }
        i++;
    }
    if(j>1)
    {
        cout<<"Keyword Found\n";
    }
    else
    {
        cout<<"Keyword Not Found\n";
        goto key;
    }

    cout<<"-------------------------------------\n";

    //Displaying Student Report
    cout<<"Student Report\n";

    cout<<"Enrollment Number : "<<en_no<<"\n";
    cout<<"Student Name : "<<name<<"\n";
    cout<<"Branch : "<<branch;

    return 0;
}
