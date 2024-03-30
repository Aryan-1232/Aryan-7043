// Suppose you are working on a geometry library that deals with different types of geometric shapes, including
// circles, rectangles, and triangles. Each shape has common properties like area and perimeter, but also specific
// attributes such as radius for circles, length and width for rectangles, and side lengths for triangles.
//  Develop a class hierarchy for geometric shapes using inheritance in C++.
//  Explain how you would utilize inheritance and polymorphism to implement algorithms for
// calculating area and perimeter that are specific to each type of shape

#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual double cal_area() = 0;
    virtual double cal_permeter() = 0;
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double cal_area() override {
        return M_PI * radius * radius;
    }
    double cal_permeter() override {
        return 2 * M_PI * radius;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double cal_area() override {
        return length * width;
    }
    double cal_permeter() override {
        return 2 * (length + width);
    }
};

class Triangle : public Shape {
private:
    double side1;
    double side2;
    double side3;
public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}
    double cal_area() override {
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }
    double cal_permeter() override {
        return side1 + side2 + side3;
    }
};

void print_area_perimeter(Shape& shape) {
    cout << "Area: " << shape.cal_area() << endl;
    cout << "Perimeter: " << shape.cal_permeter() << endl;
}

int main() {
    double radius, length, width, side1, side2, side3;

    cout << "Enter radius of the circle: ";
    cin >> radius;
    Circle circle(radius);

    cout << "Enter length and width of the rectangle: ";
    cin >> length >> width;
    Rectangle rectangle(length, width);

    cout << "Enter three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;
    Triangle triangle(side1, side2, side3);

    cout << "\nCircle ->" << endl;
    print_area_perimeter(circle);

    cout << "\nRectangle ->" << endl;
    print_area_perimeter(rectangle);

    cout << "\nTriangle ->" << endl;
    print_area_perimeter(triangle);

    return 0;
}
