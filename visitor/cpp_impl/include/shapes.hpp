#pragma once

#include "visitor.hpp"

class Shape{
public:
    virtual ~Shape() = default;
    virtual void accept(Visitor&) = 0;
};


class Circle: public Shape{
public:
    Circle(short r):radius(r)
    {     
    }

    auto get_redius() const
    {
        return radius;
    }

    void accept(Visitor & v) override
    {
        v.visit(*this);
    }

private:
    short radius{};
};



class Rectangle: public Shape{
public:
    Rectangle(short w, short l):width(w),length(l)
    {
    }

    auto get_width() const
    {
        return width;
    }

    auto get_length() const
    {
        return length;
    }

    void accept(Visitor & v) override
    {
        v.visit(*this);
    }

private:
    short width{};
    short length{};
};
