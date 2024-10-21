// basic_example.cpp
#include "Scene.h"
#include "Circle.h"
#include <memory>

int main()
{
    BigCodeRender::Scene scene;

    // Create a circle and add it to the scene
    auto circle = std::make_shared<BigCodeRender::Circle>(0.0f, 0.0f, 50.0f);
    scene.add_shape(circle);

    // Render the scene
    scene.render();

    return 0;
}
