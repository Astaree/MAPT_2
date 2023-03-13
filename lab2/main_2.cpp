#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    void printDescription();

public:
    Student();
    string description = "A student of the group";
};

Student::Student()
{
    cout << "Creating an object of the class "
            "Student, with description: "
         << endl
         << " " << description << endl;
}

void Student::printDescription()
{
    cout << "description: " << description << endl;
}

class Chairman : public Student
{
public:
    Chairman()
        : Student{} {};
    string description = "A chairman of the group";
    public:
    void printDescription();
};

void Chairman::printDescription()
{
    cout << "description: " << description << endl;
}

int main()
{
    //Student stud;
    // Function is private member of the class, so we cant access it
    //stud.printDescription();

    //creating chairman,
    Chairman chair;
    //displaying chairman description value
    cout << endl
         << chair.description << endl;
    //accessing chairman inherited function
    chair.printDescription();
    return EXIT_SUCCESS;
}
