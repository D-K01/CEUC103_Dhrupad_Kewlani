/*Practical 11; Aim: To understand program execution, compile-time and run-time
memory management, common low-level programming errors,
and implement appropriate error-handling techniques for
developing reliable software applications.

Topics Covered in 11.2: Sequential Text File HAndling, End-of-file Detection, File copying,
and Random File Access.*/


#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
    char text[100];

    cout<<"**************************************\n";
    cout<<"FILE ORGANIZATION & FILE OPERATIONS UTILITY\n";
    cout<<"**************************************\n";

    ofstream outfile("Document.txt");
    cout<<"Document.txt Created successfully\n";
    cout<<"------------------------------------------\n";
    cout<<"Enter File Contents\n";
    while (cin.getline(text,100) && text[0]!='\0') {

        outfile<<text<<"\n";
    }
    cout<<"------------------------------------------\n";
    cout<<"Data Written Successfully\n";
    cout<<"------------------------------------------\n";
    outfile.close();
    ifstream infile("Document.txt");
    while (infile.getline(text,100))
    {
        cout<<text<<"\n";
    }
    cout<<"-------------------------------------------\n";
    if (infile.eof())
    {
        cout<<"End of File Reached Successfully\n";
    }
    cout<<"-------------------------------------------\n";

    cout<<"Creating BackupDocument.txt";
    ofstream backup("BackupDocument.txt");
    if (!(infile.is_open() || backup.is_open())) {
        cout<<"Error: Unable to Open File\n";
        return 1;
    }
    while (infile.getline(text,100)) {
        backup<<text<<"\n";
    }
    backup.close();
    cout<<"Backup File Created Successfully\n";
    cout<<"-------------------------------------------\n";
    infile.clear();
    cout<<"Current File Position: "<<infile.tellg()<<"\n";
    cout<<"Moving File Pointer...\n";
    infile.seekg (18, ios::beg);
    cout<<"Displaying Contents After Repositioning\n";
    while (infile.getline(text,100)) {
        cout<<text<<"\n";
    }
    cout<<"--------------------------------------------\n";
    cout<<"Resetting File Pointer\n";
    infile.clear();
    infile.seekg (0, ios::beg);
    while (infile.getline(text,100)) {
        cout<<text<<"\n";
    }
    infile.close();
    cout<<"-------------------------------------------\n";
    cout<<"Program Executed Successfully\n";
    cout<<"-------------------------------------------\n";


    return 0;
}