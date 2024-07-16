#pragma once

#include "strategy.hpp"
#include <memory>

class Shape
{
public:
    virtual ~Shape() = default;
    virtual void draw() const = 0;
};


class Circle: public Shape
{
public:
    Circle(short raduis, std::unique_ptr<CircleDrawStrategy> strategy);


    void draw() const override final ;


private:
    short m_raduis{};
    std::unique_ptr<CircleDrawStrategy> m_strategy;
};


class Square: public Shape
{
public:
    Square(short length, std::unique_ptr<SquareDrawStrategy> strategy);

    void draw() const override final ;


private:
    short m_length{};
    std::unique_ptr<SquareDrawStrategy> m_strategy;
};


class Rect: public Shape
{
public:
    Rect(short length, std::unique_ptr<RectDrawStrategy> strategy);


    void draw() const override final ;


private:
    short m_length{};
    std::unique_ptr<RectDrawStrategy> m_strategy;
};