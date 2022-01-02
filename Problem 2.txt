#include <iostream>
#include <cmath>
using namespace std;
class Student
{
private:
int mark[5];
public:
string name;
int ID, total, stdDev, avg;void setValue()
{
string stdname; int stdID;
cout<<"\nEnter Student Name and ID=";
cin>>stdname;
name=stdname;
cin>>stdID;
ID=stdID;
}
void getMark()
{
int totalmark=0;
for(int i=0; i<5 ; i++)
{
cout<<"Enter Mark for subject "<<i<<"=";
cin>>mark[i];
totalmark= mark[i]+totalmark;
}
total=totalmark;
}
void getAvg()
{
avg= total/5;
}
void getSTDDEV()
{
int variance=0, mean=avg;
for(int q=1; q<=5; q++)
{variance += pow(mark[q] - mean, 2);
variance=variance/5;
stdDev = sqrt(variance);}
}
void show()
{
cout<<"***************************"<<endl;
cout<<name<<"("<<ID<<") has acquired the total marks of ="<<total<<" \n Average marks="<<avg;
cout<<"\nStandard Deviation= "<<stdDev<<endl;
cout<<"***************************"<<endl;
}
};
int main()
{
Student Ob[5];
Ob[0].setValue();
Ob[0].getMark();
Ob[0].getAvg();
Ob[0].getSTDDEV();
Ob[1].setValue();
Ob[1].getMark();
Ob[1].getAvg();
Ob[1].getSTDDEV();
Ob[2].setValue();
Ob[2].getMark();
Ob[2].getAvg();
Ob[2].getSTDDEV();
Ob[3].setValue();
Ob[3].getMark();Ob[3].getAvg();
Ob[3].getSTDDEV();
Ob[4].setValue();
Ob[4].getMark();
Ob[4].getAvg();
Ob[4].getSTDDEV();
Ob[0].show();
Ob[1].show();
Ob[2].show();
Ob[3].show();
Ob[4].show();
}
