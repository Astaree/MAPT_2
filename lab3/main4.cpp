#include <iostream>
#include <sstream>
using namespace std;

class Device
{
public:
    Device(){};
    ~Device(){};
    virtual int write(int id, string data) = 0;
    virtual string read(int id) = 0;
};

class Disc : public Device
{
private:
    int id_;
    string data_;

public:
    Disc(int id);
    int write(int id, string data);
    string read(int id);
};

Disc::Disc(int id)
{

    cout << "Creating an object of the Disc class   " << endl;
}

int Disc::write(int id, string data)
{
    if (id >= 0)
    {
        id_ = id;
        data_ = data;
        cout << "writing data: " << data << endl;
        return 1;
    }
    cout << "-1\n";
    return -1;
}

string Disc::read(int id)
{
    cout << "reading data: " << data_ << endl;
    return data_;
}

int main()
{
    // all members of class are virtual
    // Device u;
    Disc d1(7);
    d1.write(-1, "test 11");
    d1.read(7);
    system("pause");
}
