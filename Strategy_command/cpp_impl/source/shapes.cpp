#include "shapes.hpp"
#include <memory>



Circle::Circle(short raduis, std::unique_ptr<CircleDrawStrategy> strategy):
    m_raduis{raduis},
    m_strategy{std::move(strategy)}
    {
    }

Circle::Circle(short raduis, CircleDrawStrategyCallable strategy_callable):
    m_raduis{raduis},
    m_strategy_callable{std::move(strategy_callable)}
    {

    }



void Circle::draw() const
{
    if(m_strategy)
    {
        m_strategy->draw(*this);
    }
    else
    {
        m_strategy_callable(*this);
    }
}


Square::Square(short length, std::unique_ptr<SquareDrawStrategy> strategy):
    m_length{length},
    m_strategy{std::move(strategy)}
    {
    }

Square::Square(short raduis, SquareDrawStrategyCallable strategy_callable):
    m_length{raduis},
    m_strategy_callable{std::move(strategy_callable)}
    {

    }

void Square::draw() const
{
    if(m_strategy)
    {
        m_strategy->draw(*this);
    }
    else
    {
        m_strategy_callable(*this);
    }
}

Rect::Rect(short length, std::unique_ptr<RectDrawStrategy> strategy):
    m_length{length},
    m_strategy{std::move(strategy)}
    {
    }

Rect::Rect(short raduis, RectDrawStrategyCallable strategy_callable):
    m_length{raduis},
    m_strategy_callable{std::move(strategy_callable)}
    {

    }

void Rect::draw() const
{
    if(m_strategy)
    {
        m_strategy->draw(*this);
    }
    else
    {
        m_strategy_callable(*this);
    }
}
