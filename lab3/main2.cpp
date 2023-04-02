#include <iostream>
#include <string>
using namespace std;

class Student
{
protected:
    string name_surname = "NO_NAME";
    unsigned int id_number = 0;

public:
    Student(string sname_surname, unsigned int sid_number);
    string description = "student of group";
    void printDescription();
    void printData()
    {
        cout << " Method printData of the Student class" << endl;
        cout << " name and surname " << name_surname << endl;
        cout << " id number " << id_number << endl;
    }
};

class Coordinator
{
    public:
    string description="coordinator of group";
    protected:
    void informGroup();
    void informTeacher();

};

class Chairman : public Student,Coordinator
{
private:
    string email = "no@noemail";

public:
    Chairman(string sname_surname, unsigned int sid_number, string semail);
    string description = "chairman of a group";
    
    
};


Chairman::Chairman(string sname_surname, unsigned int sid_number, string semail)
    :Student(sname_surname, sid_number), email(semail)
{
    cout << "Creating an object of the Chairman class named: "
         << description << endl;
    Coordinator::informGroup();
    Coordinator::informTeacher();

}


Student::Student(string sname_surname, unsigned int sid_number)
    : name_surname(sname_surname)
{
    id_number = sid_number;
    cout << "Creating an object of the Student class named: "
         << description << endl;
}

void Student::printDescription()
{
    cout << "Description: " << description << endl;
}

void Coordinator::informGroup(){
    cout<<"Informed group\n";
}
void Coordinator::informTeacher(){
    cout<<"Informed teacher\n";
}

int main()
{
    Student stud("Jan Kowalski", 7);
    stud.printDescription();
    Chairman chair("Aleksandra Nowak", 999, "mail@nomail.dot");
    chair.printDescription();

    // cant acces w/o making component "friend"
    //chair.informGroup();
    //chair.informTeacher();

}
