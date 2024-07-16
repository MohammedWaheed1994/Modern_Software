#include "shapes.hpp"
#include <memory>



Circle::Circle(short raduis, std::unique_ptr<CircleDrawStrategy> strategy):
    m_raduis{raduis},
    m_strategy{std::move(strategy)}
    {
    }


void Circle::draw() const
{
    m_strategy->draw(*this);
}


Square::Square(short length, std::unique_ptr<SquareDrawStrategy> strategy):
    m_length{length},
    m_strategy{std::move(strategy)}
    {
    }

void Square::draw() const
{
    m_strategy->draw(*this);
}

Rect::Rect(short length, std::unique_ptr<RectDrawStrategy> strategy):
    m_length{length},
    m_strategy{std::move(strategy)}
    {
    }

void Rect::draw() const
{
    m_strategy->draw(*this);
}
