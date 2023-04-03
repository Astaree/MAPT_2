#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    ifstream file1("./files/A01.txt");
    ifstream file2("./files/A02.txt");
    ofstream file3("./files/merged.txt");

    if (!file1.is_open() || !file2.is_open())
    {
        cout << "Error opening file" << endl;
        return 1;
    }

    //if f3 doesn't exist, create it
    if (!file3.is_open())
    {
        file3.open("./files/merged.txt", ios::out);
    }
    

    vector<string> line;
    string _line1, _line2;
    int count = 0;
    while (getline(file1, _line1) && getline(file2, _line2))
    {   
        
        _line1.insert(0, to_string(count) + " ");
        _line2.insert(0, to_string(count+1) + " ");

        if(count<100){
            _line1.insert(0, "0");
            _line2.insert(0, "0");
        }
        if (count < 10)
        {
            _line1.insert(0, "0");
            _line2.insert(0, "0");
        }

        line.push_back(_line1);
        line.push_back(_line2);
        count+=2;
    }
    for (auto i : line)
    {
        cout << i << endl;
        file3 << i << endl;
    }
    cout << endl;

    file1.close();
    file2.close();
    file3.close();

    return 0;
}