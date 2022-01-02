
#include<iostream>
#include <cmath>
using namespace std;
class Student{
float mark[15];
public:
string Name;
int Id=0;
   double sum = 0.0, avg, variance = 0.0,deviation;
    Student( string name,int id){
    Name=name;
    Id=id;
    }
   void getMarks()
  {
   cout<<"Please Enter Five Subject's Marks."<<endl;
    for(int i=1;i<=5;i++){
    cout<<"Enter subject "<<i<<" mark :";
        cin>>mark[i];
        }
  }
    void ShowAverage()
   {
      for(int j=1;j<=5;j++)
       sum +=mark[j];
       avg = (sum)/5;
     }
    void St_deviation(){
      for(int i = 1; i <=5; ++i)
        variance+=pow(mark[i] - avg, 2);
          variance=variance/5;
          deviation = sqrt(variance);
        }
  double Show(){
 cout<<"Your Name : "<<Name<<endl;
 cout<<"Your ID : "<<Id<<endl;
 cout<<"Total marks of Subject : "<<sum<<endl;
 cout<<"Average marks : "<<avg<<endl;
 cout<<"Standard Deviation : "<<deviation<<endl<<endl;
 }
};
int main()
{
    Student o1("Karim ",23685);
    o1.getMarks();
    o1.ShowAverage();
    o1.St_deviation();
    o1.Show();

    Student o2("Rahim ",56301);
    o2.getMarks();
    o2.ShowAverage();
    o1.St_deviation();
    o2.Show();

    Student p("Abir ",14221);
    p.getMarks();
    p.ShowAverage();
    o1.St_deviation();
    p.Show();

    Student q("Zaber ",56393);
    q.getMarks();
    q.ShowAverage();
    o1.St_deviation();
    q.Show();

    Student k("Himel ",98236);
    k.getMarks();
    k.ShowAverage();
    o1.St_deviation();
    k.Show();
}
