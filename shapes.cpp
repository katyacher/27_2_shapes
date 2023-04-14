#include "shapes.h"


Circle::Circle(double r): radious(r){
    center.x = center.y = radious;
    myColor = RED;
};
double Circle::area() { atan(1) * 4 * radious;}
void Circle::find_bounding_rectangle() {
    std::cout << "Bounding recrangle has following sizes:" << std::endl;
    std::cout << "width = height - " <<  2 * radious << std::endl; 
}

Triangle::Triangle(double s): side(s){
    center.x = 0;
    center.y = 0;
    myColor = GREEN;
};
double Triangle::area() {return side * side * std::sqrt(3)/4;}
void Triangle::find_bounding_rectangle() {
    std::cout << "Bounding recrangle has following sizes:" << std::endl;
    std::cout << "width - " << side << ", height - " <<  std::sqrt(3)/2 * side << std::endl; 
}

Square::Square(double s): side(s){
    center.x = center.y = side/2;
    myColor = BLUE;
};
double Square::area() {return side * side;}
void Square::find_bounding_rectangle() {
    std::cout << "Bounding recrangle has following sizes:" << std::endl;
    std::cout << "width = height - " << side << std::endl;
}

Rectangle::Rectangle(double w, double h): width(w),height(h){
    center.x = width/2;
    center.y = height/2;
    myColor = NONE;
};
double Rectangle::area() {return width * height;}
void Rectangle::find_bounding_rectangle() {
    std::cout << "Bounding recrangle has following sizes:" << std::endl;
    std::cout << "width - " << width << ", height - " <<  height << std::endl; 
}
