// assignment question 1  made by abhijeet a s 21BCE10074

#include <iostream>
using namespace std;

class shape
{
    void displayArea()
    {
        cout << "display area" << endl;
    }
    void computeArea()
    {
        cout << "compute area" << endl;
    }
};

class circle : public shape
{
private:
    float radius, area;

public:
    void computeArea()
    {
        cout << "what is the radius of the circle" << endl;
        cin >> radius;
        area = radius * radius * (22.0 / 7.0);
    }
    void displayArea()
    {
        cout << "area of the circle with radius =  " << radius << "  is = " << area << endl;
    }
};

class triangle : public shape

{
private:
    float base, height, area;

public:
    void computeArea()
    {
        cout << "what is the base length and hight of the triangle \n";
        cout << "height = " << endl;
        cin >> height;
        cout << "base = " << endl;
        cin >> base;
        area = (base * height) * (0.5);
    }
    void displayArea()
    {
        cout << " the area of triangle with base =  " << base << " and height =  " << height << "  is " << area << endl;
    }
};

class square : public shape
{
private:
    float side, area;

public:
    void computeArea()
    {
        cout << "what is the side of the square \n";
        cin >> side;
        area = (side * side);
    }
    void displayArea()
    {
        cout << "the area of square with side = " << side << " is = " << area << endl;
    }
};

int main()
{
    circle c;
    c.computeArea();
    c.displayArea();
    triangle t;
    t.computeArea();
    t.displayArea();
    square s;
    s.computeArea();
    s.displayArea();
    return 0;
}