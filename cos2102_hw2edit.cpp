#include <iostream>
using namespace std;
class Rectangle {
private:
    double width;
    double height;
    static int count;
public:
    Rectangle();
    Rectangle(double w, double h);
    ~Rectangle();

    void setWidth(double w);
    void setHeight(double h);
    double getWidth();
    double getHeight();
    double calculatePerimeter();
    double calculateArea();
    void show();
    static int getCount();
};
int Rectangle::count = 0;
Rectangle::Rectangle() : width(0), height(0) {
    count++;
}
Rectangle::Rectangle(double w, double h) : width(w), height(h) {
    count++;
}
Rectangle::~Rectangle() {
    count--;
}
void Rectangle::setWidth(double w) {
    width = w;
}
void Rectangle::setHeight(double h) {
    height = h;
}
double Rectangle::getWidth() {
    return width;
}
double Rectangle::getHeight() {
    return height;
}
double Rectangle::calculatePerimeter() {
    return 2 * (width + height);
}
double Rectangle::calculateArea() {
    return width * height;
}
void Rectangle::show() {
    cout << "Width: " << width << endl;
    cout << "Height: " << height << endl;
    cout << "Perimeter: " << calculatePerimeter() << endl;
    cout << "Area: " << calculateArea() << endl;
}
int Rectangle::getCount() {
    return count;
}
int main() {
    Rectangle rect1;
    Rectangle rect2(1.2, 3.4);

    rect1.setWidth(5.6);
    rect1.setHeight(7.8);

    cout << "Rectangle 1:" << endl;
    rect1.show();
    cout << "Width: " << rect1.getWidth() << endl;
    cout << "Height: " << rect1.getHeight() << endl;
    cout << "Perimeter: " << rect1.calculatePerimeter() << endl;
    cout << "Area: " << rect1.calculateArea() << endl;
    cout << endl;

    cout << "Rectangle 2:" << endl;
    rect2.show();
    cout << "Width: " << rect2.getWidth() << endl;
    cout << "Height: " << rect2.getHeight() << endl;
    cout << "Perimeter: " << rect2.calculatePerimeter() << endl;
    cout << "Area: " << rect2.calculateArea() << endl;
    cout << endl;

    rect2.setWidth(9.10);
    rect2.setHeight(11.12);

    cout << "Rectangle 2 update:" << endl;
    rect2.show();
    cout << "Width: " << rect2.getWidth() << endl;
    cout << "Height: " << rect2.getHeight() << endl;
    cout << "Perimeter: " << rect2.calculatePerimeter() << endl;
    cout << "Area: " << rect2.calculateArea() << endl;
    cout << endl;

    cout << "Total Rectangles: " << Rectangle::getCount() << endl;

    return 0;
}
