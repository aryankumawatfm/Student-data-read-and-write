#include <iostream>
#include <cstring>
using namespace std;
class student
{
private:
    long marks;

public:
    char RollNo[100];
    char name[100];
    void getstudent()
    {
        cout << "Enter your RollNo:- ";
        cin >> RollNo;

        cout << "Enter your name:- ";
        cin >> name;

        cout << "enter marks :- ";
        cin >> marks;
    }

    void showstudent()
    {
        cout << "RollNo :- " << RollNo << endl;
        cout << "name :- " << name << endl;
        cout << "marks :- " << marks << endl;
    }

    void updatemarksstudent()
    {

        cout << "enter marks :- ";
        cin >> marks;
    }
};

int main()
{

    student students[100];
    char input;
    int i = 0;

    while (input != 'e')
    {

        cout << "If you want to see data of all student so type [a]" << endl
             << "If you want to write data some of student so type [w]" << endl
             << "If you want to read some data of student so type [r] " << endl
             << "If you want to search data of student so type [s] " << endl
             << "If you want to update marks of a student so type [u] " << endl
             << "If you want to romve some data of student so type [d] " << endl
             << "Exit from the program so type [e] ?" << endl;
        cin >> input;

        if (input == 'a')
        {
            for (int p = 0; p < i; p++)
            {
                students[p].showstudent();
            }
        }

        else if (input == 'w')
        {

            students[i].getstudent();

            i++;
        }

        else if (input == 'r')
        {
            int index;
            cout << "enter student id";
            cin >> index;
            students[index].showstudent();
        }

        else if (input == 's')
        {

            char name[100];
            cout << "enter the student name or RollNo :-" << endl;
            cin >> name;

            for (int y = 0; y < i; y++)
            {

                cout << "this is student name or RollNo :- " << (students[y].name || students[y].RollNo) << endl;
                if ((strcmp(students[y].name, name) == 0) || (strcmp(students[y].RollNo, name) == 0))
                {

                    students[y].showstudent();
                    break;
                }
            }
        }

        else if (input == 'u')
            {

                char name[100];
                cout << "enter the name and rollno of a student :- " << endl;
                cin >> name;

                for (int u = 0; u < i; u++) {
                    if ((strcmp(students[u].name, name) == 0) || (strcmp(students[u].RollNo, name) == 0))
                    {

                        students[u].updatemarksstudent();
                        break;
                    }
                }

            }

                else if (input == 'd')
            {

                char name[100];
                cout << "enter the student nmae and RollNo :-" << endl;
                cin >> name;

                for (int x = 0; x < i; x++)
                
                    // cout << "this is student name rollNo is deleted :- " << ((students[x].name) || (students[x].RollNo)) << endl;
                    if ((strcmp(students[x].name, name) == 0) || (strcmp(students[x].RollNo, name) == 0))
                    {

                        for (int z = x; z < i - 1; z++)
                            
                            {
                                student temp = students[z];
                                students[z] = students[z + 1];
                            }
                        i--;
                        break;
                    }
                }
            }

        else if (input == 'e')
        {

            cout << "Have a nice time";
        }
    }

}
