#ifndef SEGMENT_H
#define SEGMENT_H

#include "Object.h"

using Point = std::array<double,2>;

class Segment : public Object
{
    public:
        Segment(const Color& pColor, const double& pReflection, const std::array<Point,2>& pExtremities);
        
};

#endif
