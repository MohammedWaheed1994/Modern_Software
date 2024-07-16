#include "strategy.hpp"


void CircleDrawStrategy::draw(const Circle& )
{
    std::cout << "Drawing a circle\n";
    std::cout.flush();
}


void SquareDrawStrategy::draw(const Square& )
{
    std::cout << "Drawing a Square\n";
    std::cout.flush();
}

void RectDrawStrategy::draw(const Rect& )
{
    std::cout << "Drawing a Rect\n";
    std::cout.flush();
}


