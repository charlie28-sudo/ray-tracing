#ifndef OBJECT_H
#define OBJECT_H

#include <cinttypes>
#include <array>

using Color = std::array<uint8_t,3>;
class Ray;

class Object{
    public:
        Object(const Color& pColor, const double& pReflection);
        Object(const uint8_t& pRed, const uint8_t& pBlue, const uint8_t& pGreen, const double& pReflection);
        const Color& getColor() const;
        const double& getReflectionCoeff() const;

        virtual const std::array<double, 2> computeIntersection(const Ray& pRay) = 0;
    protected:
        Object() = delete;
        Color mColor; 
        double mReflectionCoeff;
};

#endif
