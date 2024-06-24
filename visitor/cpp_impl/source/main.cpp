#include "shapes.hpp"
#include "operation.hpp"


int main()
{
    Circle circle{5};
    Rectangle rectangle{4,6};

    Draw draw;
    Area area;

    circle.accept(draw);
    rectangle.accept(draw);

    circle.accept(area);
    rectangle.accept(area);


    return 0;
}