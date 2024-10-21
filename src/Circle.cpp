// Circle.cpp
#include "Circle.h"
#include <iostream>

namespace BigCodeRender
{

    Circle::Circle(float x, float y, float radius) : x(x), y(y), radius(radius) {}

    void Circle::draw() const
    {
        // Placeholder drawing logic, replace with actual rendering later
        std::cout << "Drawing a circle at (" << x << ", " << y << ") with radius " << radius << std::endl;
    }

} // namespace BigCodeRender
