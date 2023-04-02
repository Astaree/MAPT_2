#include <iostream>
#include <queue>
using namespace std;

class Applicant {
public:
  int applicant_num = 0;
  int time;
};


int main() {
  queue<Applicant> eit;
  /* creating an applicant class object, its copies will be added to
     the queue */
  Applicant p; 

  eit.push(p);
  /* creating a temporary applicant class object, to assign to it a
     reference returned by the method back() */
  Applicant temp = eit.back();

  cout << "last applicant number: " << temp.applicant_num
       << ", queue size: " << eit.size() << endl;

  // alternative
  cout << "last applicant number: " << eit.back().applicant_num
       << ", queue size: " << eit.size() << endl;

  cout << "applicants waiting for service:  " << eit.size() - 1 << endl;
}