#pragma once

#include "strategy.hpp"
#include <memory>
#include <functional>

class Shape
{
public:
    virtual ~Shape() = default;
    virtual void draw() const = 0;
};


class Circle: public Shape
{
    using CircleDrawStrategyCallable = std::function<void(const Circle&)>;
public:
    Circle(short raduis, std::unique_ptr<CircleDrawStrategy> strategy);
    Circle(short raduis, CircleDrawStrategyCallable strategy_callable);


    void draw() const override final ;


private:
    short m_raduis{};
    std::unique_ptr<CircleDrawStrategy> m_strategy;
    CircleDrawStrategyCallable m_strategy_callable;
};


class Square: public Shape
{
    using SquareDrawStrategyCallable = std::function<void(const Square&)>;
public:
    Square(short length, std::unique_ptr<SquareDrawStrategy> strategy);
    Square(short raduis, SquareDrawStrategyCallable strategy_callable);

    void draw() const override final ;


private:
    short m_length{};
    std::unique_ptr<SquareDrawStrategy> m_strategy;
    SquareDrawStrategyCallable m_strategy_callable;
};


class Rect: public Shape
{
    using RectDrawStrategyCallable = std::function<void(const Rect&)>;
public:
    Rect(short length, std::unique_ptr<RectDrawStrategy> strategy);
    Rect(short raduis, RectDrawStrategyCallable strategy_callable);


    void draw() const override final ;


private:
    short m_length{};
    std::unique_ptr<RectDrawStrategy> m_strategy;
    RectDrawStrategyCallable m_strategy_callable;
};