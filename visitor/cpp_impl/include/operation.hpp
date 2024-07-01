#pragma once

#include <iostream>
#include "visitor.hpp"

class Draw final: public ShapeVisitor{
public:
    void visit(Circle const& c) override{
        std::cout << "drawing a circle with radius: " << c.get_redius() << "\n";
    }

    void visit(Rectangle const& t) override{
        std::cout << "drawing a Triangle with width: " << t.get_width() << " " << "and length: " << t.get_length() << "\n";
    }
};


class Area final: public ShapeVisitor{
public:
    void visit(Circle const& c)  override{
        auto r = c.get_redius();
        std::cout << "Area of the circle is " << r * r << "\n";
    }

    void visit(Rectangle const& t)  override{
        std::cout << "Area of the triangle is " << t.get_length() * t.get_width() << "\n";
    }
};



