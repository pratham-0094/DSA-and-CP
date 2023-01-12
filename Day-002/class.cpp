#include <iostream>

using namespace std;

// converting c to cpp code
// object-oriented programming
class Rectangle
{

    // hiding the data
private:
    // data members
    int length;
    int breadth;

public:
    // constructor - same name as class name and does not have return type
    // automatically when object/instance of the class is created
    // used for initializing the class
    // if we not create any constructor then cpp automatically create a default constructure with no parameter and no body

    // default constructure
    Rectangle()
    {
        length = 10;
        breadth = 20;
    }

    // parameteric constructure
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    Rectangle(Rectangle &r)
    {
        length = r.length;
        breadth = r.breadth;
    }

    // destructure
    // call wen the object/instance of the class is destroyed
    ~Rectangle()
    {
        length = 0;
        breadth = 0;
    }

    // member functions
    int area()
    {
        return length * breadth;
    }

    // function declaration
    void change_value(int, int);
};

// defining class function outside the class
void Rectangle::change_value(int new_l, int new_b)
{
    length = new_l;
    breadth = new_b;
}

int main()
{
    Rectangle r1(10, 5);

    // acessing class function using dot(.)
    cout << r1.area() << endl;
    r1.change_value(15, 25);

    // creating object using copy constructor
    Rectangle r2(r1);
    cout << r2.area() << endl;
}