#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct stddetail
{
    int studID;
    string studName;
    int age;
    string gender;
    float score;
    char grade;
};

int main()
{
    int a, b, summationscore, summationage;
    int malecount=0;
    int femalecount=0;
    double avrscore, avrage;

    stddetail student[5];

    for (a=0; a<5; a++) {
        cout << "STUDENT DETAILS: " << a << endl << endl;
        cout << "Student ID: "; cin >> student[a].studID;
        cout << "Name: "; cin >> student[a].studName;
        cout << "Age: "; cin >> student[a].age;
        cout << "Gender: "; cin >> student[a].gender;
        cout << "Score: "; cin >> student[a].score;
        if(student[a].score >= 80){
            student[a].grade = 'A'; }
        else if(student[a].score >= 70){
            student[a].grade = 'B';}
        else if(student[a].score >= 60){
            student[a].grade = 'C';}
        else if(student[a].score >= 50){
            student[a].grade = 'D';}
        else if(student[a].score >= 40){
            student[a].grade = 'E';}
        else if(student[a].score < 40){
            student[a].grade = 'F';}
        cout << "Grade: " << student[a].grade;
        cout << endl << endl << endl;

        if(student[a].gender == "Male")
            malecount++;
        else
            femalecount++;
    }
    //cout << "Student ID" << " " << "Name" << " " << "Age" << " " << "Gender" << " " << "Score" << " " << "Grade" << endl;
    //cout << student[a].studID << " " << student[a].studName << " " << student[a].age << " " << student[a].gender << " " << student[a].score << " " << student[a].grade << endl << endl;

    //cout << "Number of males: " << malecount << endl;
    //cout << "Number of females: " << femalecount << endl;

    //summationscore = student[0].score+ student[1].score + student[2].score + student[3].score + student[4].score;
    //summationage = student[0].age+ student[1].age + student[2].age + student[3].age + student[4].age;
for(a = 0; a<5; a++){

    summationscore = student[a].score + student[a++].score;
    summationage = student[a].age + student[a++].age;
}
    avrscore = summationscore/5;
    avrage = summationage/5;

    cout << "Student ID" << " " << "Name" << " " << "Age" << " " << "Gender" << " " << "Score" << " " << "Grade" << endl;
    cout << student[a].studID << " " << student[a].studName << " " << student[a].age << " " << student[a].gender << " " << student[a].score << " " << student[a].grade << endl;

    cout << "Number of males: " << malecount;
    cout << "Number of females: " << femalecount;
    cout << "Average score: " << avrscore << endl;
    cout << "Average age: " << avrage << endl;

   return 0;
}
