/*Practical 6; Aim: To implement one-dimensional arrays for storing, traversing,
searching, sorting, and manipulating multiple records, and to
apply these concepts in the Student Record Management System.

Topics Covered in 6.4-B: Merging two 1-D Sorted Arrays*/

#include<iostream>
using namespace std;

int main()
{
    int arr1[5], arr2[5], merg_arr[10];
    short int i, j, n;

    cout<<"*************************************\n";
    cout<<"MERGE SORTED ARRAYS\n";
    cout<<"*************************************\n";

    cout<<"First Array\n";
    for(i=0;i<5;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Second Array\n";
    for(i=0;i<5;i++)
    {
        cin>>arr2[i];
    }

    i=0;
    j=0;
   for(n=0;n<10;n++)
   {
       while(i!=5 && j!=5)
       {
           if((arr1[i]<arr2[j]) && i<5)
           {
               merg_arr[n]=arr1[i];
               i++;
               break;
           }
           else
           {
               merg_arr[n]=arr2[j];
               j++;
               break;
           }
       }
   }
   n=n-1;
   if(i<5)
   {

       merg_arr[n]=arr1[i];
   }
   else if(j<5)
   {

       merg_arr[n]=arr2[j];
   }

   cout<<"First Array\n";
   for(i=0;i<5;i++)
   {
       cout<<arr1[i]<<"\t";
   }
   cout<<"\n";
   cout<<"Second Array\n";
   for(i=0;i<5;i++)
   {
       cout<<arr2[i]<<"\t";
   }
   cout<<"\n";

   cout<<"Merge Sorted Array\n";

   for(i=0;i<10;i++)
   {
       cout<<merg_arr[i]<<"\t";
   }

    return 0;
}
