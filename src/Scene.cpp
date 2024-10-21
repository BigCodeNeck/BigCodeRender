// Scene.cpp
#include "Scene.h"
#include "Shape.h"
#include <iostream>

namespace BigCodeRender
{

    Scene::Scene()
    {
        // Constructor
    }

    Scene::~Scene()
    {
        // Destructor
    }

    void Scene::add_shape(std::shared_ptr<Shape> shape)
    {
        shapes.push_back(shape);
    }

    void Scene::render()
    {
        for (const auto &shape : shapes)
        {
            shape->draw();
        }
    }

} // namespace BigCodeRender
