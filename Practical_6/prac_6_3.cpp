/*Practical 6; Aim: To implement one-dimensional arrays for storing, traversing,
searching, sorting, and manipulating multiple records, and to
apply these concepts in the Student Record Management System.

Topics Covered in 6.3: 1-D Array, Array Manipulation, Array Shifting, Linear Search and Array Traversal*/

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    short int stu_no, i, p, j, idx;
    string stu_id[20];
    string name[20];
    float percentage[20];
    char grade[20][3], choice;
    string enrol_no;


    cout<<"********************************\n";
    cout<<"STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout<<"********************************\n";

    cout<<"Enter Number of Students: ";
    cin>>stu_no;

    //Taking Student Details as Input.
    cout<<"Enter Student Details\n";

    for(i=0;i<stu_no;i++)
    {
        cin>>stu_id[i];
        cin.ignore();
        getline(cin, name[i]);
        cin>>percentage[i];
        cin>>grade[i];
        cout<<"\n";
    }

    //Displaying Current Records in the Database
    cout<<"-------------------------------\n";
    cout<<"Current Student Records\n";
    cout<<"\n";
    for(i=0;i<stu_no;i++)
    {
        cout<<stu_id[i];
        cout<<setw(20)<<name[i];
        cout<<setw(10)<<percentage[i];
        cout<<"\n";
    }
    cout<<"\n";
    cout<<"-------------------------------\n";

    //Asking User Whether They Want to Add information of a new student
   newi : cout<<"Do you want to Insert New Student Information?(Y/N)";
    cin>>choice;

    if(choice!='Y'&&choice!='y'&&choice!='N'&&choice!='n')
    {
        cout<<"Enter Either Y or N";
        goto newi;
    }
    else if(choice=='Y'||choice=='y')
    {
        cout<<"Enter Position : ";
        cin>>p;

        //Adjusting Array to Add Details of the New Student.
        for(i=stu_no,j=stu_no-1;i>=p, j>=p-1;i--, j--)
        {
            stu_id[i]=stu_id[j];
            name[i]=name[j];
            percentage[i]=percentage[j];
            grade[i][0]=grade[j][0];
            grade[i][1]=grade[j][1];
            grade[i][2]=grade[j][2];
            grade[i][3]=grade[j][3];
        }
        //Adding Details of the New Student.
        cout<<"Enter Enrollment Number: ";
        cin>>stu_id[p-1];
        cin.ignore();
        cout<<"Enter Student Name : ";
        getline(cin, name[p-1]);
        cout<<"Enter Percentage: ";
        cin>>percentage[p-1];
        cout<<"Enter Grade: ";
        cin>>grade[p-1][3];

        stu_no=stu_no+1;

        cout<<"Record Inserted Successfully.\n";

        //Showing Updated Student Records
        cout<<"-------------------------------\n";
        cout<<"Current Student Records\n";
        cout<<"\n";
        for(i=0;i<stu_no;i++)
        {
            cout<<stu_id[i];
            cout<<setw(20)<<name[i];
            cout<<setw(10)<<percentage[i];
            cout<<"\n";
        }
    }
    else
    {
        goto fin;
    }
    cout<<"\n";
    //Asking User if they want to Update Information of any student.
    cout<<"-------------------------------\n";
    upd : cout<<"Do you want to Update Student Information?(Y/N)";
    cin.ignore();
    cin>>choice;

    if(choice!='Y'&&choice!='y'&&choice!='N'&&choice!='n')
    {
        cout<<"Enter Either Y or N";
        goto upd;
    }
    else if(choice=='Y'||choice=='y')
    {
        //Searching for the ID whose data has to be updated
        cout<<"Update Student Record\n";
        cout<<"Enter Enrollment Number : ";
        cin>>enrol_no;


        idx=0;
        while(stu_id[idx]!=enrol_no)
        {
            idx++;
        }
        //Updating percentage and grade of the required Id number.
        cout<<"Enter New Percentage: ";
        cin>>percentage[idx];
        cout<<"Enter New Grade: ";
        cin>>grade[idx];
        cout<<"Record Updated Successfully";

    }
    else
    {
        goto fin;
    }

    //Deleting the Student Record based on the position of the student.
    cout<<"\nDelete Student Record\n";
    p=0;
    cin>>p;

    if(p>1)
    {
        for(i=p-1;p<stu_no;i++,p++)
        {
            stu_id[i]=stu_id[p];
            name[i]=name[p];
            percentage[i]=percentage[p];
            grade[i][0]=grade[p][0];
            grade[i][1]=grade[p][1];
            grade[i][2]=grade[p][2];
            grade[i][3]=grade[p][3];
        }
    }
    else
    {
        i=0;
        while(p<stu_no)
        {
            stu_id[i]=stu_id[p];
            name[i]=name[p];
            percentage[i]=percentage[p];
            grade[i][0]=grade[p][0];
            grade[i][1]=grade[p][1];
            grade[i][2]=grade[p][2];
            grade[i][3]=grade[p][3];
            i++;
            p++;
        }
    }
    cout<<"Record Deleted Successfully";

    stu_no=stu_no-1;

    //Displaying Final Student Records in the database
    fin : cout<<"-------------------------------\n";
    cout<<"Final Student Records\n";
    cout<<"\n";
    for(i=0;i<stu_no;i++)
    {
        cout<<stu_id[i];
        cout<<setw(20)<<name[i];
        cout<<setw(10)<<percentage[i];
        cout<<setw(5)<<grade[i];
        cout<<"\n";
    }

    return 0;
}
