#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void display_vec(const vector<T>& c){
  for (T i : c) {
    cout << i << " ";
  }
  cout << endl;
}

int main() {
  vector<int> v;  
  for (size_t i=0; i<10; ++i){
    v.push_back(i);
  }
  display_vec(v);
  cout<<v.size()<<endl;
  v.erase(v.begin()+3, v.begin()+7);
  display_vec(v);
  v.pop_back();
  display_vec(v);
  v.insert(v.begin(),102);
  display_vec(v);
  v.push_back(110011);
  display_vec(v);
}