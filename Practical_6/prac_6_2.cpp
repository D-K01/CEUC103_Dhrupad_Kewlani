/*Practical 6; Aim: To implement one-dimensional arrays for storing, traversing,
searching, sorting, and manipulating multiple records, and to
apply these concepts in the Student Record Management System.

Topics Covered in 6.2: Performing Operations on 1-D to search and find top three performers*/

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
    string id;
    string ntemp;
    short int i, j, idx;
    char id_search;



    cout<<"*********************************\n";
    cout<<"SPORTS EVENT SCORE ANALYSIS\n";
    cout<<"*********************************\n";

    cout<<"Enter Number of Participants: ";
    cin>>participant_no;

    if(participant_no<0||participant_no>50)
    {
        cout<<"Number of participants can't be less than zero or more than 50";
    }
    else
    {


        for(i=0;i<participant_no;i++)
        {
            cout<<"Enter Participant ID: ";
            cin>>participant_id[i];

            cout<<"Enter Participant Name: ";
            cin>>name[i];

            cout<<"Enter Participant Score: ";
            cin>>score[i];
        }

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

        cout<<"Total Score:"<<tot_score<<endl;

        avg_score=(float)tot_score/participant_no;

        cout<<"Average Score:"<<avg_score<<endl;

        cout<<"Highest Score : "<<max_score<<endl;
        cout<<"Lowest Score: "<<min_score<<endl;


        cout<<"Do you want to search for any participant?(Y/N)";
       s : cin>>id_search;

        if(id_search!='y'&&id_search!='Y'&&id_search!='n'&&id_search!='N')
        {
            cout<<"Enter either Y or N";
            goto s;
        }

        //Taking ID to search and Searching for it in the Array
        else if(id_search=='y'||id_search=='Y')
        {
            pid : cout<<"Search Participant\n";
            cout<<"Enter Participant ID: ";
            cin>>id;

                for(idx=0;idx<participant_no;idx++)
                {
                    if(participant_id[idx]==id)
                    {
                        break;
                    }

                }

                //Showing message if ID inputted does not Exist.
                if(idx+1>participant_no)
                {
                    cout<<"-------------------------------\n";
                    cout<<"Participant Not Found\n";
                    cout<<"-------------------------------\n";
                    goto pid;
                }
            else {

                cout<<"-------------------------------\n";
                cout<<"Participant Found\n";
                cout<<"-------------------------------\n";

                cout<<left<<setw(8)<<"ID";
                cout<<": "<<participant_id[idx]<<endl;
                cout<<left<<setw(8)<<"Name";
                cout<<": "<<name[idx]<<endl;
                cout<<left<<setw(8)<<"Score";
                cout<<": "<<score[idx]<<endl;
            }
        }

        //Displaying Ranking List of All the Performers.
        cout << "-------------------------------\n";
        cout << "Ranking List\n";
        cout << "-------------------------------\n";

        cout << left << setw(6) << "Rank";
        cout << setw(10) << "Name";
        cout << setw(20) << "Score";
        cout << "\n";

        for (i = 0; i < (participant_no - 1); i++) {
            for (j = i + 1; j < participant_no; j++) {
                if (score[i] < score[j]) {
                    temp = score[i];
                    score[i] = score[j];
                    score[j] = temp;
                    ntemp = name[i];
                    name[i] = name[j];
                    name[j] = ntemp;
                }
            }
        }
        for (i = 0; i < participant_no; i++) {
            cout << left << setw(6) << i + 1;
            cout << setw(10) << name[i];
            cout << setw(20) << score[i];
            cout << "\n";
        }
        cout << "-------------------------------\n";

        //Displaying Top Three Performers.
        cout << "Top Three Performers\n";

        for (i = 0; i < 3; i++) {
            cout << i + 1 << ".";
            cout << name[i];
            cout << " - ";
            cout << score[i];
            cout << "\n";
        }

    }
    return 0;
}
