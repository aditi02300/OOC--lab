#include<iostream>
using namespace std;
class student
{
    private:
    char name [30];
    int rollNo;
    float marks;
    public:
    void inputDetails() {
        cout <<"enter student name :";
        cin >> name;
        cout << " enter roll number :";
        cin >>rollNo;
        cout << "enter marks : " ;
        cin >> marks;

    }
    void displayDetails() {
         cout << "student name :"<< name << endl;
         cout << " roll numbers : " << rollNo << endl;
         cout<<"Marks: "<<marks<<endl;
    }
        };
        int main()
        {
        student studentObj;
        studentObj.inputDetails();
        cout<<"\nstudent details : \n ";
        studentObj.displayDetails();
        return 0;
        }
         
         

         