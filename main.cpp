#include <iostream>
#include "shapes.h"

int main(int, char**) {
    std::cout << "27.2 Hierarchy of geometric shapes" << std::endl;

    std::string command;
    while (command != "exit"){
        std::cout << "Enter the command: circle, square, triangle, rectangle" << std::endl;
        std::cin >> command;
        if(command == "circle"){
            std::cout << "Enter the radious of the circle: ";
            double r;
            std::cin >> r;
            Circle* circle = new Circle(r);
            circle->info();
        } else if (command == "square"){
            std::cout << "Enter the length of the side of the square: ";
            double s;
            std::cin >> s;
            Square* square = new Square(s);
            square->info();
        } else if (command == "triangle"){
            std::cout << "Enter the length of the side of the triangle: ";
            double s;
            std::cin >> s;
            Triangle* triangle = new Triangle(s);
            triangle->info();
            
        } else if (command == "rectangle"){
            std::cout << "Enter the width and height of the rectangle: ";
            double w{0}, h{0};
            std::cin >> w >> h;
            Rectangle* rectangle = new Rectangle(w, h);
            rectangle->info();
            
        } else {
            std::cout << "Unknown command. Try again." << std::endl;
        }

    }
}
