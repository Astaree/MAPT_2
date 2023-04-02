#include <iostream>
#include <string>
using namespace std;

class Student {
public:
  string description = "A student of a group";
  Student();
  void printDescription();
};

Student::Student(){
    cout << "Creating student object class named: " << description << endl;
  }

class Chairman : private Student {
public:
  string description = "A chairman of a group";
  void printDescription();
};

void Student::printDescription() {
  cout << "Object description: " << description << endl;
}

void Chairman::printDescription(){
  cout << "Object description: " << description << endl;

}
int main() {
    Chairman ch;
    ch.printDescription();
}
