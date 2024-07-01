
#include "cars.hpp"
#include "car_operation.hpp"
#include "shapes.hpp"
#include "operation.hpp"
#include <vector>
#include <memory>
#include <variant>


using Shapes = std::vector<std::unique_ptr<Shape>>;

using car = std::variant<BMW,VW>;
using Cars = std::vector<car>;


void draw_all_shapes(Shapes const& shapes)
{   
    Draw draw{};
    for(auto const& shape: shapes)
    {
        shape->accept(draw);
    }
}

void area_all_shapes(Shapes const& shapes)
{
    Area area{};
    for(auto const& shape: shapes)
    {
        shape->accept(area);
    }
}

void start_all_cars(Cars const& cars)
{
    for(auto const & car: cars)
    {
        std::visit(VehicleStart{}, car);
    }
}

int main()
{
    

    Shapes shapes;
    Cars cars;


    shapes.emplace_back(std::make_unique<Circle>(Circle{5}));

    shapes.emplace_back(std::make_unique<Rectangle>(Rectangle{4,6}));

    cars.emplace_back(BMW{});
    cars.emplace_back(VW{});

    draw_all_shapes(shapes);
    area_all_shapes(shapes);
    start_all_cars(cars);


    return 0;
}