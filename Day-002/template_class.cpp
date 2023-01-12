#include <iostream>

using namespace std;

// template/generic class
// used for generic programming
// same class for multiple datatypes
template <class T>
class Rectangle
{

private:
    T length;
    T breadth;

public:
    Rectangle()
    {
        length = 10;
        breadth = 20;
    }

    Rectangle(T l, T b)
    {
        length = l;
        breadth = b;
    }

    Rectangle(Rectangle &r)
    {
        length = r.length;
        breadth = r.breadth;
    }

    T area()
    {
        return length * breadth;
    }

    void change_value(T, T);
    void show();
};

template <class T>
void Rectangle<T>::change_value(T new_l, T new_b)
{
    length = new_l;
    breadth = new_b;
}

template <class T>
void Rectangle<T>::show()
{
    cout << length << endl
         << breadth << endl;
}

int main()
{
    // creating object
    Rectangle<int> r1(10, 5);
    Rectangle<float> r2(10, 5);

    cout << r1.area() << endl;
    r1.change_value(15, 25);

    cout << r1.area() << endl;
    r1.change_value(15, 25);
}