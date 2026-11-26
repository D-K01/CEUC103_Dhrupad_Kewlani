/*Practical 6; Aim: To implement one-dimensional arrays for storing, traversing,
searching, sorting, and manipulating multiple records, and to
apply these concepts in the Student Record Management System.

Topics Covered in 6.1: 1-D Array*/

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int participant_no, tot_score=0, temp, max_score, min_score;
    float avg_score;
    string participant_id[50];
    string name[50];
    int score[50];
    short int i, j;



    cout<<"*********************************\n";
    cout<<"SPORTS EVENT SCORE ANALYSIS\n";
    cout<<"*********************************\n";

    //Taking Number of Participants to use in for loop.
    cout<<"Enter Number of Participants: ";
    cin>>participant_no;

    //Taking Participant Details
    for(i=0;i<participant_no;i++)
    {
        cout<<"Enter Participant ID: ";
        cin>>participant_id[i];

        cout<<"Enter Participant Name: ";
        cin>>name[i];

        cout<<"Enter Participant Score: ";
        cin>>score[i];
    }

    //Showing Performance of all the Participants in the order of input.
    cout<<"-------------------------------\n";
    cout<<"Participant Performance\n";
    cout<<"-------------------------------\n";

    cout<<left<<setw(6)<<"ID";
    cout<<setw(10)<<"Name";
    cout<<setw(20)<<"Score";
    cout<<"\n";
    cout<<"-------------------------------\n";

    for(i=0;i<participant_no;i++)
    {
        cout<<left<<setw(6)<<participant_id[i];
        cout<<setw(10)<<name[i];
        cout<<setw(20)<<score[i];
        cout<<"\n";
        tot_score=tot_score+score[i];
    }
    cout<<"-------------------------------\n";

    //Calculating Max and Minimum Score
    max_score=score[0];
    min_score=score[0];
    for(i=0;i<participant_no;i++)
    {
        if(max_score<score[i])
        {
            max_score=score[i];
        }
        if(min_score>score[i])
        {
            min_score=score[i];
        }
    }

    //Scores Analysis
    cout<<"Total Score:"<<tot_score<<endl;

    avg_score=(float)tot_score/participant_no;

    cout<<"Average Score:"<<avg_score<<endl;

    cout<<"Highest Score : "<<max_score<<endl;
    cout<<"Lowest Score: "<<min_score<<endl;

    return 0;
}
