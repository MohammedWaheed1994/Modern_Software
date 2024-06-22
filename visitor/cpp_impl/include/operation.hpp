#pragma once

#include <iostream>
#include "visitor.hpp"

class Draw final: public Visitor{
public:
    void visit(Circle& c) override{
        std::cout << "drawing a circle with radius: " << c.get_redius() << "\n";
    }

    void visit(Rectangle& t) override{
        std::cout << "drawing a Triangle with width: " << t.get_width() << " " << "and length: " << t.get_length() << "\n";
    }
};


class Area final: public Visitor{
public:
    void visit(Circle& c) override{
        auto r = c.get_redius();
        std::cout << "Area of the circle is " << r * r << "\n";
    }

    void visit(Rectangle& t) override{
        std::cout << "Area of the triangle is " << t.get_length() * t.get_width() << "\n";
    }
};