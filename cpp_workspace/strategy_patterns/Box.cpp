/**
 * An interface describes the behavior of a C++ class without committing to a
 * particular implementation of that class.
 *
 * The C++ interfaces are implemented using abstract classes. A class is made
 * abstract by declaring at least one of it functions as pure virtual function.
 *
 * A pure virtual function is specified by placing "=0" in its declaration.
 */
#include <iostream>
using namespace std;

// Base class.
class Shape
{
    public:
        // pure virtual function providing interface framework.
        virtual int getArea() = 0;
        void setWidth(int w) { width = w; }
        void setHeight(int h) { height = h; }
    protected:
        int width;
        int height;
};


/**
 * The purpose of an abstract class is to provide an appropriate base class
 * from which other classes can inherit. Abstract classes cannot be used to
 * instantiate objects and serves only as an interface. Attempting to
 * instantiate an object of an abstract class causes a compilation error.
 *
 * Thus, if a subclass of an abstract class needs to be instantiated, it
 * has to implement each of the virtual functions, which means that it
 * supports the interface declared by the abstract class.
 *
 * Failure to override a pure virtual function in a derived class, then
 * attempting to instantiate objects of that class, is a compilation error.
 *
 * Classes that can be used to instantiate objects are called concrete classes.
 */

/**
 * Derived classes.
 */
class Rectangle: public Shape
{
    public:
        int getArea() { return width * height; }
};

class Triangle: public Shape
{
    public:
        int getArea() { return .5 * width * height; };
};

int main(void)
{
    Rectangle rectangle;
    rectangle.setWidth(5);
    rectangle.setHeight(7);
    cout << "Area of rectangle=[" << rectangle.getArea() << "]" << endl;

    Triangle triangle;
    triangle.setWidth(5);
    triangle.setHeight(7);
    cout << "Area of triangle=[" << triangle.getArea() << "]" << endl;

    return 0;
}
