#include <iostream>
#include <iomanip>
using namespace std;

class Vector
{
public:
    Vector(double);
    Vector(double, double);
    Vector(double, double, double);

    void overloadedFn(double e1);
    void overloadedFn(Vector &e1);
    void print_v();
    size_t dimension_;

public:
    double data_[3] = {0, 0, 0};
};

Vector::Vector(double element1)
{
    cout << endl
         << "Creating a new Vector class object in R1 space:" << endl;
    dimension_ = 1;
    data_[0] = element1;
}

Vector::Vector(double element1, double element2)
{
    cout << endl
         << "Creating a new Vector class object in R2 space:" << endl;
    dimension_ = 2;
    data_[0] = element1;
    data_[1] = element2;
}

Vector::Vector(double element1, double element2, double element3)
{
    cout << endl
         << "Creating a new Vector class object in R3 space:" << endl;
    dimension_ = 3;
    data_[0] = element1;
    data_[1] = element2;
    data_[2] = element3;
}

void Vector::print_v()
{
    cout << "Coords: ";
    for (auto data : data_)
    {
        cout << data << ", ";
    }
}

void Vector::overloadedFn(double e1)
{
    cout << "Overloaded fn 1: " << setprecision(2) << e1 << endl;
}

void overloadedFn(Vector &e1)
{
    cout << "Overloaded fn 2: ";
    size_t i = 1;
    for (auto data : e1.data_)
    {   
        if (i == e1.dimension_) break;
        cout << data << " ";
        i++;
    }
    cout << endl;
}

int main(void)
{
    Vector r1(1.0); // R1
    // cout << "Vector class object with number of dimensions:"
    //      << r1.dimension_<<"\n";
    // r1.print_v();

    Vector r2(1.0, 1.0); // R2
    // cout << "Vector class object with number of dimensions:"
    //      << r2.dimension_ << "\n";
    // r2.print_v();

    Vector r3(1.0, 1.0, 1.0); // R3
    // cout << "Vector class object with number of dimensions:"
    //      << r3.dimension_ << "\n";
    // r3.print_v();

    r1.overloadedFn(r1.data_[0]);
    overloadedFn(r3);
    return EXIT_SUCCESS;
}
