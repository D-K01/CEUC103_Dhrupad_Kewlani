/*Practical 10; Aim: To model real-world entities using composite data types,
organize related information efficiently, understand shared
memory composite data representation, analyze padding and
alignment, and evaluate different composite data
representations for efficient software design.

Topics Covered in 10.1: Composite Data types(Structures), Nested Structures, Array of structures, and pointers
to Structures.*/

#include<iostream>

using namespace std;

struct student_data {
  char enroll[9], name[20], branch[4];
  struct academic_info {
    float perc;
    short int sem;
    char grade[3];
  }acad;
  struct contact_info {
    long int mob_no;
    char email[30];
  }contact;
};

void display_update_record(student_data *data_ptr, int size);
int main() {
  student_data data[60];
  short int no_students, i;

  cout<<"******************************************\n";
  cout<<"STUDENT RECORD MANAGEMENT SYSTEM\n";
  cout<<"******************************************\n";

  cout<<"Enter the number of students: ";
  cin>>no_students;

  cout<<"------------------------------------------\n";
  for (i=0;i<no_students;i++) {
    cout<<"Student "<<i+1<<": ";
    cout<<"Enrollment Number: ";
    cin>>data[i].enroll;
    cout<<"Student Name: ";
    cin.ignore();
    cin.getline(data[i].name,20);
    cout<<"Branch: ";
    cin>>data[i].branch;
    cout<<"Semester: ";
    cin>>data[i].acad.sem;
    cout<<"Percentage: ";
    cin>>data[i].acad.perc;
    cout<<"Grade: ";
    cin>>data[i].acad.grade;
    cout<<"Mobile Number: ";
    cin>>data[i].contact.mob_no;
    cout<<"Email ID: ";
    cin>>data[i].contact.email;
    cout<<"------------------------------------------\n";
    cout<<"Student Records\n";
    display_update_record(data, 60);
  }

  return 0;
}
void display_update_record(student_data *data_ptr, int size) {
  short int i, num;
  char choice;
  for (i=0;i<size;i++) {
    cout<<(data_ptr+i)->enroll<<" "<<(data_ptr+i)->name<<" "<<(data_ptr+i)->branch<<"\n";
    cout<<"Semester: "<<(data_ptr+i)->acad.sem<<"\n";
    cout<<"Percentage: "<<(data_ptr+i)->acad.perc;
    cout<<"Grade: "<<(data_ptr+i)->acad.grade<<"\n";
    cout<<"Mobile: "<<(data_ptr+i)->contact.mob_no<<"\n";
    cout<<"Email: "<<(data_ptr+i)->contact.email<<"\n";
    cout<<"------------------------------------------\n";
    cout<<"Do you want to update contact information? (Y/N)";
    cin>>choice;
    if (choice == 'Y' || choice == 'y') {
      cout<<"Enter the student number: ";
      cin>>num;
      cout<<"Mobile Number: ";
      cin>>data_ptr[num-1].contact.mob_no;
      cout<<"Email ID: ";
      cin>>data_ptr[num-1].contact.email;
    }
  }
}