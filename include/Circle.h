// Circle.h
#ifndef BIGCODERENDER_CIRCLE_H
#define BIGCODERENDER_CIRCLE_H

#include "Shape.h"

namespace BigCodeRender
{

    class Circle : public Shape
    {
    public:
        Circle(float x, float y, float radius);

        void draw() const override;

    private:
        float x, y, radius;
    };

} // namespace BigCodeRender

#endif // BIGCODERENDER_CIRCLE_H
