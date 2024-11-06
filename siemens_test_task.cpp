#include <algorithm>
#include <iostream>
#include <vector>
#include <memory>

class Shape
{
public:
    Shape() {
        std::cout << "Shape C.\n";
    }

    virtual double area() const{
        return 0;
    }

    virtual ~Shape(){
        std::cout << "Shape D.\n";
    }
};

class Circle : public Shape
{
public:
    Circle(double radius) : m_radius(radius) {
        std::cout << "Circle C.\n";
    }
    ~Circle(){
        std::cout << "Circle D.\n";
    }

    virtual double area() const{
        return 3.14 * m_radius * m_radius;
    }
protected:
    double m_radius;

};

class Square : public Shape
{
public:
    Square( double size) : m_size(size){
        std::cout << "Square C.\n";
    }

    ~Square(){
        std::cout << "Square D.\n";
    }

    virtual double area() const {
        return m_size * m_size;
    }
protected:
    double m_size;
};

class Cube : public Square
{
public:
    Cube( double size) : Square(size){
        std::cout << "Cube C.\n";
    }

    ~Cube(){
        std::cout << "Cube D.\n";
    }

    double area() const{
        return Square::area() * 6;
    }
};

void printArea(const Square&  s){
    std::cout << "Square area is " << s.area() << std::endl;
}

int main()
{
    {
        std::vector<std::unique_ptr<Shape>> shapes;
    
        shapes.push_back(std::make_unique<Circle>(1));//"Shape C.\n"//Circle C.\n"
        shapes.push_back(std::make_unique<Square>(2));//"Shape C.\n"//"Square C.\n"
        shapes.push_back(std::make_unique<Cube>(1));//"Shape C.\n"\\"Square C.\n"//"Cube C.\n";

        for(auto& s : shapes)
        {
            std::cout << s->area() << std::endl;//3.14//4//6
            
        }
    }
    //desktruktory

    std::cout << "\n---------------\n\n";
    
    //printArea(Square(1));
    //printArea(Cube(1));

    return 0;
}

