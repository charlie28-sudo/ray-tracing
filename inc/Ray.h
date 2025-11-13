#ifndef RAY_H
#define RAY_H

#include <array>

using Point=std::array<double,2>;

class Ray{
    public:
        Ray();
        Ray(const double& pDirectorCoefficient, const double& pOrigin);
        Ray(const Point& p1, const Point& p2);

        const double & getDirectorCoefficient() const;
        const double & getOrigin() const;
    private:
        void setCoeffsFromPoints(const Point& p1, const Point& p2);
        double mDirectorCoefficient;
        double mOrigin;
};

#endif
