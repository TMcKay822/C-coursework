/* Interface Money File
* Author: Tiffany McKay
* Version: 10/23/2019
*/


#ifndef MCKAYTALLSHAPES_H
#define MCKAYTALLSHAPES_H
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<cmath>

using namespace std;

//Shape class declaration 
class Shape
{
public: 
    //Constructors
    Shape(); // Defualt Constructor
    Shape(string name); // Constructor

    //Member functions
    string getName(); //Returns the name of the shape
    void setName(string newName);
    virtual double getArea() = 0; 
private:
    //Member variable
    string name;
};


//Circle class declaration 
class Circle : public Shape
{
public:
    //Constructors
    Circle(); //Default constructor
    Circle(int theRadius); //Constructor

    // Member functions
    void setRadius(int newRadius); 
    double getRadius(); //returns value of radius
    virtual double getArea(); //virtual function, since area changes per shape


private: 
    //Member variables
    int radius; 
};


//Rectangle class declaration 
class Rectangle : public Shape
{
public: 
    //Constructors 
    Rectangle(); //Default constructor
    Rectangle(int height, int width); //Constructor
    
    //Member functions
    void setHeight(int newHeight);
    void setWidth(int newWidth); 
    double getHeight(); //returns value of rectangle's height
    double getWidth(); //returns value of rectangle's weight
    virtual double getArea(); //virtual function, since area changes per shape

private: 
    //Member variables
    int height; 
    int width; 

};


#endif






/* Implementation file for the Shape, Circle, and Rectangle classes
* Author: Tiffany McKay
* Version: 10/23/2019
*/


#include<iostream>
#include<cstdlib>
#include "McKayTAllShapes.h"

using namespace std;

//Shape class definitions 
//Default Constructor, sets shape name to blank, 
//when there is no shape designated 
Shape::Shape()
{
    name = "";
}

//Constructor 
Shape::Shape(string name)
{
    this->name = name;
}

//Returns the name of the shape
string Shape::getName()
{
    return this->name;
}

void Shape::setName(string newName)
{
    this->name = newName;
}

//Circle class definitions
//Default constructors, default value sets radius to 0
Circle::Circle() : Shape("Circle"), radius(0)
{
    //intentionally left blank
}

//Constructor
Circle::Circle(int theRadius) : Shape("Circle")
{
    radius = theRadius; 
}

//Sets the value of the radius
void Circle::setRadius(int newRadius)
{
    this->radius = newRadius; 
}

//Returns value of the radius
double Circle::getRadius()
{
    return radius; 
}

//Returns the area of the circle
double Circle::getArea()
{
    return 3.14159 * radius * radius; 
}


//Rectangle class defintions
// Defualt constructor, sets height and width to 0
Rectangle::Rectangle() : Shape("Rectangle"), height(0), width(0)
{
    // intentionally left blank
}

// Constructor
Rectangle::Rectangle(int newHeight, int newWidth) : Shape("Rectangle")
{
    height = newHeight;
    width = newWidth; 
}

//Sets the height for the rectangle
void Rectangle::setHeight(int newHeight) 
{
    this->height = newHeight; 
}

//Sets the width for the rectangle
void Rectangle::setWidth(int newWidth)
{
    this->width = newWidth; 
}

//Returns the height of the rectangle
double Rectangle::getHeight()
{
    return height; 
}

//Returns the width of the rectangle    
double Rectangle::getWidth() 
{
    return width;
}

//Returns the area of the rectangle
double Rectangle::getArea()
{
    return height * width; 
}






/* Application file for the Circle and Rectangle class
* Author: Tiffany McKay
* Version: 10/23/2019
*/


#include <iostream>
#include<cstdlib>
#include <string>

#include "McKayTAllShapes.h"
#include "McKayTAllShapes.cpp"


using namespace std;

//Main function
int main()
{
    //Creating a circle object
    Circle c(2);

    //Displaying data
    cout << c.getName() << " has radius " << c.getRadius() << " and area " << c.getArea() << endl;

    cout << "\n\n";



    //Creating a rectangle object
    Rectangle r(2, 4); 
    cout << r.getName() << " has height " << r.getHeight()
         << " and width " << r.getWidth() << " and area " 
         << r.getArea() << endl;

    return 0; 
}
