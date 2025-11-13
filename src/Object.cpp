#include <array>
#include "Object.h"

Object::Object(const Color& pColor, const double& pReflection):
    mColor(pColor), mReflectionCoeff(pReflection)
    {

    }

Object::Object(const uint8_t& pRed, const uint8_t& pBlue, const uint8_t& pGreen, const double& pReflection):
    Object({pRed, pBlue, pGreen}, pReflection)
    {

    }

const Color& Object::getColor() const {
    return mColor;
}

const double& Object::getReflectionCoeff() const {
    return mReflectionCoeff;
}
