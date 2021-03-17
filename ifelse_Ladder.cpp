#include<iostream>
using namespace std;

class Student
{
    public:
        void GradeOnMarks(int marks)
        {
            if(marks>=70 && marks<=100)
            {
                cout<<"First class with Distinction"<<endl;
            }
            else if(marks>=60 && marks<70)
            {
                cout<<"First class"<<endl;
            }
            else if(marks<60 && marks>=35)
            {
                cout<<"Pass class"<<endl;
            }
            else
            {
                cout<<"fail"<<endl;
            }

        }
};


int main()
{
    int marks=0;
    cout<<"Enter the marks of student"<<endl;
    cin>>marks;

    Student sobj;
    sobj.GradeOnMarks(marks);

    return 0;
}