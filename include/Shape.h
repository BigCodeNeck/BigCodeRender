// Shape.h
#ifndef BIGCODERENDER_SHAPE_H
#define BIGCODERENDER_SHAPE_H

namespace BigCodeRender
{

    class Shape
    {
    public:
        virtual ~Shape() = default;

        // Virtual method to draw the shape
        virtual void draw() const = 0;
    };

} // namespace BigCodeRender

#endif // BIGCODERENDER_SHAPE_H
