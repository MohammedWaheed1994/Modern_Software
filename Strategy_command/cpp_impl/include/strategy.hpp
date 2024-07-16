#pragma once
#include <iostream>

class Circle;
class Square;
class Rect;

// use template default value
template <typename ShapeType = Circle>
class DrawStrategy{
public:
    virtual ~DrawStrategy() = default;

    virtual void draw(const ShapeType& shape) = 0;
};

//use template specialization
template<>
class DrawStrategy<Rect>
{
public:
    DrawStrategy()
    {
        std::cout << "We are rect !!!";
        std::cout.flush();
    }
    virtual void draw(const Rect& shape) = 0;
};

//use template default value
class CircleDrawStrategy: public DrawStrategy<>
{
public:
    void draw(const Circle& shape) override;
};

class SquareDrawStrategy: public DrawStrategy<Square>
{
public:
    void draw(const Square& shape) override;
};

class RectDrawStrategy: public DrawStrategy<Rect>
{
public:
    void draw( const Rect& shape) override;
};

