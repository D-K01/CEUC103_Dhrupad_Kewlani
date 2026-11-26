/*Practical 5; Aim: To enhance the Student Record Management System by
implementing iterative constructs for repetitive data entry, batch
processing of student records, and continuous execution of
menu-driven operations.

Topics Covered in 5.2: while Loop & do while Loop*/

#include<iostream>

using namespace std;

int main()
{
    short int sem;
    long long int mob_no;
    char reg_new;
    string en_no;
    string name;
    string branch;

    cout<<"**************************************\n";
    cout<<"STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout<<"**************************************\n";

    cout<<"Student Registration\n";

    //Asking student/user for their details to register them
    while (newreg != 'N' || newreg != 'n') {
        cout << "Enrollment Number : ";
        cin >> en_no;
        getline(cin, en_no);
        cin.ignore();


        cout << "Student Name : ";
        cin >> name;
        getline(cin, name);
        cin.ignore();


        cout << "Branch : ";
        cin >> branch;
        getline(cin, branch);
        cin.ignore();


        cout << "Semester : ";
        cin >> sem;

        cout << "Mobile Number : ";
        cin >> mob_no;

        cout << "Student Registered Successfully.\n";

        //Asking user whether they want to register another student
    newreg :
        cout << "Register Another Student? (Y/N) : ";
        cin >> reg_new;

        //Checking whether user added a valid input choice

        if (reg_new != 'Y' || reg_new != 'y' || reg_new != 'N' || reg_new != 'n') {
            //Showing error if user/student gives an invalid choice value
            cout << "Enter either Y or N\n";
            goto newreg;
        }
        cout<<"----------------------------------------------------------\n";
    }
    cout<<"Returning to Main Menu...";
    return 0;
}
