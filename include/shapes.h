#include <iostream>
#include <math.h>
#include <string>

struct Point{
    int x, y;
};

enum color{
        RED,
        GREEN,
        BLUE,
        NONE
    };

class Shape{
protected:
    Point center;
    color myColor = NONE;

public:
   
    virtual double area() = 0;
    virtual void find_bounding_rectangle() = 0;

    std::string getColor(){
        if(myColor == RED) return "RED";
        if(myColor == GREEN) return "GREEN";
        if(myColor == BLUE) return "BLUE";
        if (myColor == NONE) return "NONE";
        return "NONE";
    }

    void info(){
        std::cout << "Color = " << getColor() << std::endl;
        std::cout << "Area = " << area() << std::endl;
        find_bounding_rectangle();
    }
};

class Rectangle:public Shape{
    double width, height;
public:
    Rectangle(double w, double h);
    double area() override;
    void find_bounding_rectangle() override;
};


class Circle: public Shape{
    double radious;
public:
    Circle(double r);
    double area() override;
    void find_bounding_rectangle() override;
};

class Triangle: public Shape{
    double side;
public:
    Triangle(double s);
    double area() override;
    void find_bounding_rectangle() override;
};

class Square: public Shape{
    double side;
public:
    Square(double s);
    double area() override;
    void find_bounding_rectangle() override;
};
    
