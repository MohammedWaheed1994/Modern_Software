#pragma once


class Circle;
class Rectangle;

class Visitor{
public:
    virtual void visit(Circle&) = 0;
    virtual void visit(Rectangle&) = 0;
};