/*Practical 11; Aim: To understand program execution, compile-time and run-time
memory management, common low-level programming errors,
and implement appropriate error-handling techniques for
developing reliable software applications.

Topics Covered in 11.3: Persistent Data Storage, Sequential File Organization for Student Records, Automated File Backup,
and Graceful Error Handling.*/

#include<iostream>
#include<fstream>

using namespace std;
struct student {
    float percentage;
    short int sem;
    char enroll_no[9], name[30], branch[4], grade[3];
};
int main() {
    student *stud_details;
    short int student_num, i=0;
    char ch;
    ofstream fout("StudentRecords.txt");

    cout<<"*************************************************\n";
    cout<<"STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout<<"*************************************************\n";

    cout<<"StudentRecords,txt Created Successfully\n";
    cout<<"--------------------------------------------------\n";
    cout<<"Enter Number of Students: ";
    cin>>student_num;
    stud_details = new student[student_num];
    cout<<"--------------------------------------------------\n";
    for(i=0;i<student_num;i++) {
        cout<<"student "<<i+1<<". "<<"\n";
        cout<<"Enrollment Number: ";
        cin>>(stud_details+i)->enroll_no;
        cout<<"Student Name: ";
        cin.ignore();
        cin.getline((stud_details+i)->name, 30);
        cout<<"Branch: ";
        cin>>(stud_details+i)->branch;
        cout<<"Semester: ";
        cin>>(stud_details+i)->sem;
        cout<<"Percentage: ";
        cin>>(stud_details+i)->percentage;
        cout<<"Grade: ";
        cin>>(stud_details+i)->grade;
        cout<<"--------------------------------------------------\n";

       fout<<(stud_details+i)->enroll_no<<"\n";
        fout<<(stud_details+i)->name<<"\n";
        fout<<(stud_details+i)->branch<<"\n";
        fout<<(stud_details+i)->sem<<"\n";
        fout<<(stud_details+i)->percentage<<"\n";
        fout<<(stud_details+i)->grade<<"\n";
    }
    fout.close();
    cout<<"Student Records Stored Successfully\n";
    cout<<"--------------------------------------------------\n";
    cout<<"Reading StudentRecords.txt\n";

    ifstream fin("StudentRecords.txt");
    if(!fin.is_open()) {
        cout<<"Error opening file!\n";
        delete[] stud_details;
        return 1;
    }
    i=0;
    while(i<student_num && fin>>(stud_details+i)->enroll_no) {
        fin.ignore();
        fin.getline((stud_details+i)->name, 30);
        fin>>(stud_details+i)->branch;
        fin>>(stud_details+i)->sem;
        fin>>(stud_details+i)->percentage;
        fin>>(stud_details+i)->grade;

        cout<<"Enrollment: "<<(stud_details+i)->enroll_no<<"\n";
        cout<<"Name: "<<(stud_details+i)->name<<"\n";
        cout<<"Branch: "<<(stud_details+i)->branch<<"\n";
        cout<<"Semester: "<<(stud_details+i)->sem<<"\n";
        cout<<"Percentage: "<<(stud_details+i)->percentage<<"\n";
        cout<<"Grade: "<<(stud_details+i)->grade<<"\n";
        cout<<"--------------------------------------------------\n";
        i++;
    }
    fin.peek();
    if (fin.eof())
    {
        cout<<"End of File Reached Successfully\n";
    }
    fin.close();

    cout<<"--------------------------------------------------\n";
    cout<<"Creating BackupStudentRecords.txt\n";
    ifstream fsrc("StudentRecords.txt");
    ofstream fbkp("BackupStudentRecords.txt");
    if(!fbkp.is_open() || !fsrc.is_open()) {
        cout<<"Error opening file!\n";
        delete[] stud_details;
        return 1;
    }
    while (fsrc.get(ch)) {
        fbkp.put(ch);
    }
    fsrc.close();
    fbkp.close();
    cout<<"Backup Created Successfully\n";
    cout<<"----------------------------------------------------\n";
    delete[] stud_details;
    stud_details=NULL;
    cout<<"Program Executed Successfully\n";
    cout<<"---------------------------------------------------\n";

    return 0;
}