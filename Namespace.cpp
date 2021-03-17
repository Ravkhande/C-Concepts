/*
Note : Namespace contain variables, functions, classes in it and it gives acccess to all the things and it avoids the names collision
*/

/////// Type 1- Userdefined Namespce ////////

#include <iostream>

namespace Student
{
    class StudentInformation
    {
    public:
        int RollNo;
        void Grade(int RollNo = 30)     // function with default argument
        {
            switch (RollNo)     // switch case
            {
            case 10:
                std::cout << "Marks is : 80"
                     << "\n";
                break;
            case 15:
                std::cout << "Marks is : 70"
                     << "\n";
                break;
            case 20:
                  std::cout << "Marks is : 90"
                     << "\n";
                break;
            default:
                std::cout << "Marks is : 0"
                     << "\n";
            }
        }
    };
}

int main()
{
    
    using namespace Student;
    StudentInformation sobj;
    sobj.Grade(10);
    sobj.Grade(15);
    sobj.Grade();
    sobj.Grade(20);
               // or
   Student::StudentInformation sobj;
   sobj.Grade(10);
    sobj.Grade(15);
    sobj.Grade();
    sobj.Grade(20);

    
}


//////// Type 2- Nested Namespace ///////////
#include<iostream>
namespace outer
{
    int i=10;

    namespace Inner
    {
    
        int j=20;
    }
}

int main()
{
    
    std::cout<<outer::i<<"\n";
    std::cout<<outer::Inner::j<<"\n";

    
             // or
             
     using namespace outer;
     using namespace outer::Inner;
     std::cout<<i<<"\n";
     std::cout<<j<<"\n";

     return 0;
}


// Type 3- Anonymous namespace(Unnamed Namspace) ////////

#include<iostream>
#include<string>
namespace
{
    class Hello
    {
        public:
       void nameofcompany()
       {
           std::cout<<"name of company is : Intelizign"<<"\n";

       }

    };
}

int main()
{
    Hello hobj;
    hobj.nameofcompany();
    return 0;
}
