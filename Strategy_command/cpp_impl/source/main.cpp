#include "strategy.hpp"
#include "shapes.hpp"
#include <iostream>
#include <vector>
#include <memory>

int main()
{
    using Shapes = std::vector<std::unique_ptr<Shape>>;

    Shapes shapes;
    shapes.push_back(std::make_unique<Circle>(5, std::make_unique<CircleDrawStrategy>() ));

    shapes.push_back(std::make_unique<Square>(5, std::make_unique<SquareDrawStrategy>() ));

    shapes.push_back(std::make_unique<Rect>(5, std::make_unique<RectDrawStrategy>() ));

    for(auto& shape : shapes)
    {
        shape->draw();
    }


    return 0;
}