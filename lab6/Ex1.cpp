#include <string>
#include <iostream>
using namespace std;

int main(){
  string txt;
  txt = " real message!!!"; // overloaded operator =
  cout << txt << endl;

  if (txt == "real message!!!") {
    cout << "comparison with use of the overloaded operator"
         << endl;
  } else {
    cout << "!@#$% ???" << endl;
  }

  cout << "text size = " << txt.size() << endl;
  cout << "Where is NULL???" << endl;

  for (long long unsigned int i = 0; i < txt.size(); i++) {
    cout << txt.at(i) << endl;

    /*Using .at() is better than using square brackets [] because it performs bounds checking and throws 
    an exception if an out-of-range index is used. This can prevent undefined behavior and make the code more robust. 
    On the other hand, using square brackets [] does not perform bounds checking and can result in undefined 
    behavior if an out-of-range index is used.*/

    /* cout << txt[i] << endl;
       alternative, but using .at() is safer */
  }

  string txt2(" Find out what will happen with the message.");

  txt.append(txt2).append(" One more message?");

  txt.replace
    (txt.find("message!!!"),
     string("message!!!").length(),
     "MESSAGE!!!");

     
  txt.replace
    (txt.find("message"),
     string("message").length(),
     "real MESSAGE");

  txt.replace
    (txt.find("real MESSAGE"),
     string("real MESSAGE").length(),
     "original MESSAGE");

  cout << txt << endl;

  return 0;
}