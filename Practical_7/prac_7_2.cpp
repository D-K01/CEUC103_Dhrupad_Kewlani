/*Practical 7; Aim: To implement string processing techniques using character arrays
and standard string functions for concatenation, extraction,
pattern matching, and text manipulation, and integrate these
operations into the Student Record Management System.

Topics Covered in 7.2: Character Arrays, Standard String Library Functions, Manual String
Manipulation, String Concatenation, Substring Extraction and Pattern Matching.*/

#include <cstring>
#include <iostream>
#include<string>
using namespace std;
int main()
{
    char paragraph[100], first_word[20], last_word[20], concat_paragraph[50], search_palindrome_word[10],
    para_upper[100], para_lower[100], para_rev[100], paragraph_2[100];
    short int i, j, char_count=0, word_count=0, alpha_count=0, digit_count=0, special_char_count=0, occur=0;
    bool F=false;

    cout<<"***************************************************\n";
    cout<<"DOCUMENT TEXT ANALYZER\n";
    cout<<"***************************************************\n";
    //Taking Paragraph in Input
    cout<<"Enter Paragraph\n";
    cin.getline(paragraph, 100);
    cout<<"----------------------------------------------------\n";
    cout<<"Text Analysis\n";
    cout<<"----------------------------------------------------\n";

    //Counting number of characters, words, alphabets, digits and special characters.
    for (i=0; paragraph[i]!='\0'; i++)
    {
        char_count++;
        if (paragraph[i]!=' ')
        {
            if (i == 0 || (paragraph[i + 1] != ' ' && paragraph[i - 1] == ' ')) {
                word_count++;
            }
            if ((paragraph[i] >= 'A' || paragraph[i] >= 'a') && (paragraph[i] <= 'Z' || paragraph[i] <= 'z')) {
                alpha_count++;
            } else if (paragraph[i] >= '0' && paragraph[i] <= '9') {
                digit_count++;
            } else {
                special_char_count++;
            }
        }
    }
    cout<<char_count<<'\n';
    cout<<word_count<<'\n';
    cout<<alpha_count<<'\n';
    cout<<digit_count<<'\n';
    cout<<special_char_count<<'\n';

    //Extracting first word, last word, first character
    cout<<"----------------------------------------------------\n";
    cout<<"String Extraction\n";
    cout<<"----------------------------------------------------\n";

    i=0;
    while (paragraph[i]!=' ') {
        first_word[i]=paragraph[i];
        i++;
    }
    first_word[i]='\0';
    j=char_count;
    i=0;
    while (paragraph[j]!=' ') {
        j--;
    }
    while (j<char_count-2) {
        last_word[i]=paragraph[j+1];
        i++;
        j++;
    }
    last_word[j]='\0';
    cout<<first_word<<"\n";
    cout<<last_word<<"\n";
    cout<<paragraph[0]<<"\n";
    cout<<paragraph[char_count-1]<<'\n';

    //Concatenating Two Strings
    cout<<"----------------------------------------------------\n";
    cout<<"Concatenation\n";
    cout<<"----------------------------------------------------\n";

    cout<<"Enter Additional Sentence\n";
    cin.getline(concat_paragraph, 50);
    paragraph[char_count]='\n';
    i=0;
    j= 1 + char_count;
    while (concat_paragraph[i]!='\0') {
        paragraph[j]=concat_paragraph[i];
        i++;
        j++;
    }
    paragraph[j]='\0';
    cout<<"Updated Paragraph\n";
    cout<<paragraph<<"\n";

    cout<<"----------------------------------------------------\n";
    cout<<"Pattern Matching\n";
    cout<<"----------------------------------------------------\n";

    //Searching Substring in the main paragraph
    cout<<"Enter Search Word : \n";
    cin>>search_palindrome_word;
    i=0;
    while (paragraph[i]!=0) {
        j=0;
        while(search_palindrome_word[j]!='\0' && paragraph[i+j]==search_palindrome_word[j]) {
            j++;
            occur=i;
        }
        i++;
        if (search_palindrome_word[j]=='\0') {
            F=true;
            break;
        }
    }
    if (F) {
        cout<<"Keyword Found\n";
        cout<<"First Occurrence Position: "<<occur<<"\n";
    }
    else {
        cout<<"Keyword Not Found\n";
    }

    cout<<"----------------------------------------------------\n";
    cout<<"String Transformation\n";
    cout<<"----------------------------------------------------\n";

    //Transforming paragraph to uppercase
    cout<<"Uppercase\n";

    for (i=0; paragraph[i]!='\0'; i++) {
        if (paragraph[i]>='a' && paragraph[i]<='z') {
            para_upper[i]=paragraph[i]-32;
        }
        else {
            para_upper[i]=paragraph[i];
        }
    }
    para_upper[i]='\0';
    cout<<para_upper<<"\n";

    //Transforming paragraph to lowercase
    cout<<"----------------------------------------------------\n";
    cout<<"Lowercase\n";
    for (i=0; paragraph[i]!='\0'; i++) {
        if (paragraph[i]>='A' && paragraph[i]<='Z') {
            para_lower[i]=paragraph[i]+32;
        }
        else {
            para_lower[i]=paragraph[i];
        }
    }
    para_lower[i]='\0';
    cout<<para_lower<<"\n";
    cout<<"----------------------------------------------------\n";

    //reversing the paragraph
    cout<<"Reverse\n";
    j=0;
    while (paragraph[j]!='\0') {
        j++;
    }
    for (i=0; paragraph[i]!='\0'; i++, j--) {
        para_rev[i]=paragraph[j-1];
    }
    para_rev[i]='\0';
    cout<<para_rev<<"\n";
    cout<<"----------------------------------------------------\n";

    //Checking if a word is a palindrome or not
    cout<<"Palindrome Check\n";

    cout<<"Enter Word :";
    cin>>search_palindrome_word;
    F=false;
    j=0;
    while (search_palindrome_word[j]!='\0') {
        j++;
    }
    i=0;
    while (i<j) {
        if (search_palindrome_word[i]!=search_palindrome_word[j-1]) {
            F=true;
            break;
        }
        i++;
        j--;
    }
    if (F) {
        cout<<"Result : Not a Palindrome\n";
    }
    else {
        cout<<"Result : Palindrome\n";
    }

    //Using various standard string library functions for various tasks
    cout<<"----------------------------------------------------\n";
    cout<<"Standard String Functions\n";
    cout<<"---------------------------------------------------\n";

    cout<<"length : "<<strlen(paragraph)<<"\n";
    strcpy(paragraph_2,paragraph);
    cout<<"String Copied Successfully\n";
    if (strcmp(paragraph,paragraph_2)==0)
    {
        cout<<"Comparison Result : Equal\n";
    }
    else
    {
        cout<<"Comparison Result : Not Equal\n";
    }
    cout<<"enter new paragraph";
    cin>>concat_paragraph;
    strcat(paragraph,concat_paragraph);
    cout<<"Concatenation : Successful\n";

    cout<<"Search Word\n";
    cin>>search_palindrome_word;
    if (strstr(paragraph,search_palindrome_word)) {
        cout<<"Substring Search : Found\n";
    }
    else {
        cout<<"Substring Search : Not Found\n";
    }
    for (i=0; paragraph_2[i]!='\0'; i++) {
        para_upper[i]=toupper(paragraph_2[i]);
    }
    cout<<"toupper() :  Successful\n";
    for (i=0; paragraph_2[i]!='\0'; i++) {
        para_lower[i]=tolower(paragraph_2[i]);
    }
    cout<<"tolower() :  Successful\n";

    cout<<"---------------------------------------------------\n";

    return 0;
}
