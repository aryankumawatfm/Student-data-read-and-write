#include<iostream>
using namespace std;
class student
{
private:
    char name[100];
    long marks;
    long RollNo;
    
public:
    void getstudent()
    {
        cout<<"Enter your RollNo:- ";
        cin>>RollNo;
        
        cout<<"Enter your name:- ";
        cin>>name;
        
        cout<< "enter marks :- ";
        cin>>marks;
        
    }

    void showstudent()
    {   cout <<"RollNo"<< RollNo << endl;
        cout<<"name"<< name << endl;
        cout<<"marks"<< marks << endl;
    }
};

int main()
{
   student student[2];

  
   

   for (int i  = 0; i < 2 ; i++)
   { 

    student[i].getstudent();
   }
   
   for (int i  = 0; i < 2; i++)
   {
    student[i].showstudent();
   }
   


}