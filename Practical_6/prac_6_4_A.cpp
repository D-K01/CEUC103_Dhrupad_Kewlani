/*Practical 6; Aim: To implement one-dimensional arrays for storing, traversing,
searching, sorting, and manipulating multiple records, and to
apply these concepts in the Student Record Management System.

Topics Covered in 6.4-A: 2-D Array, Matrix Multiplication, Using Nested Loops*/

#include <iostream>
 using namespace std;

 int main()
 {
     int matrix1[3][3], matrix2[3][3], result_matrix[3][3];
     short int i, j, r=3, c=3, k;

     cout<<"************************************\n";
     cout<<"MATRIX MULTIPLICATION\n";
     cout<<"************************************\n";

     cout<<"First Matrix\n";

     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             cin>>matrix1[i][j];
         }
     }

     cout<<"Second Matrix\n";
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             cin>>matrix2[i][j];
         }
     }

     for(i=0;i<r;i++)
     {
         for(j=0;j<c;j++)
         {
             result_matrix[i][j]=0;
             for(k=0;k<3;k++)
             {
                 result_matrix[i][j]=result_matrix[i][j]+(matrix1[i][k]*matrix2[i][j]);
             }
         }
     }

     cout<<"First Matrix\n";
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             cout<<matrix1[i][j];
             cout<<"\t";
         }
         cout<<"\n";
     }

     cout<<"Second Matrix\n";
    for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             cout<<matrix2[i][j];
             cout<<"\t";
         }
         cout<<"\n";
     }

     cout<<"------------------------------\n";

     cout<<"Resultant Matrix\n";
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             cout<<result_matrix[i][j];
             cout<<"\t";
         }
         cout<<"\n";
     }
     cout<<"------------------------------\n";
     return 0;
 }
