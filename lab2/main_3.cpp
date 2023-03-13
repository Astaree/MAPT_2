#include <iostream>
#include <string>
using namespace std;

class Student
{
    //moved to private
private:
    string name_surname = "NO_NAME";
    unsigned int id_number = 0;

public:
    string description = "A student of the group";
    Student(){}; // Default init
    Student(string name_surname, unsigned int id_number);
    void printDescription();
    void printData()
    {
        cout << " Method print_data() of the base class" << endl;
        cout << " name surname " << name_surname << endl;
        cout << " id number " << id_number << endl;
    }
    //gettery
    int getID()
    {
        return id_number;
    }
    string getName()
    {
        return name_surname;
    }
};

Student::Student(string name_surname, unsigned int id_number)
    : name_surname(name_surname), id_number(id_number)
{
    cout << "Creating an object of the Student class named: "
         << id_number << endl;
}

class Chairman : public Student
{
public:
    string email = "no@noemail";
    Chairman(string name_surname, unsigned int id_number, string email);
    string description = "A chairman of the group";
    void printData()
    {
        //Updated to contain email and acces other members

        cout << " Method print_data() of the base class" << endl;
        cout << " name surname " << getName() << endl;
        cout << " id number " << getID() << endl;
        cout << " email " << email << endl;
    };
};

Chairman::Chairman(string name_surname, unsigned int id_number, string email)
    : Student(name_surname, id_number), email(email)
{
    cout << "Creating an object of the Chairman class named: "
         << description << endl;
}

void Student::printDescription()
{
    cout << "Description: " << description << endl;
}

int main()
{
    Student stud("aa", 7);
    stud.printDescription();
    cout << "Data:"
         << stud.getName() << " "
         << stud.getID() << endl;
    Chairman chair("Aleksandra Nowak", 999, "mail@nomail.dot");
    chair.printDescription();
    cout << "Data:"
         << chair.getName() << " "
         << chair.getID() << endl;

    chair.printData();
    return EXIT_SUCCESS;
}
