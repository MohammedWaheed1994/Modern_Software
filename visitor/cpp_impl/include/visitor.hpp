#pragma once


class Circle;
class Rectangle;



class ShapeVisitor{
public:
    virtual void visit(Circle const&) = 0;
    virtual void visit(Rectangle const&) = 0;
};


