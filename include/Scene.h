// Scene.h
#ifndef BIGCODERENDER_SCENE_H
#define BIGCODERENDER_SCENE_H

#include <vector>
#include <memory>

namespace BigCodeRender
{

    class Shape; // Forward declaration of Shape class

    class Scene
    {
    public:
        Scene();
        ~Scene();

        // Add a shape to the scene
        void add_shape(std::shared_ptr<Shape> shape);

        // Render the scene
        void render();

    private:
        std::vector<std::shared_ptr<Shape>> shapes;
    };

} // namespace BigCodeRender

#endif // BIGCODERENDER_SCENE_H
