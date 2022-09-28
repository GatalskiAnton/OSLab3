#include <math.h>
#include "number.h"
#include <ostream>

using namespace number;

namespace vector
{
    template<typename T>
    class Vector
    {
    public:
        Vector(Number<T> firstParam, Number<T> secondParam);
        Vector operator+(const Vector& right) const
        {
            return Vector(firstParam_ + right.firstParam_, secondParam_ + right.secondParam_);
        }

        Number<T> getFirstParam() const
        {
            return firstParam_;
        }

        Number<T> getSecondParam() const
        {
            return secondParam_;
        }

        Number<double> getRaduis()
        {
            return Number<double>(sqrt((firstParam_ * firstParam_ + secondParam_ * secondParam_).getNumber()));
        }

        Number<double> getAngle()
        {
            return Number<double>(atan((secondParam_ / firstParam_).getNumber()));
        }

    private:
        Number<T> firstParam_;
        Number<T> secondParam_;
    };

    template<typename T>
    std::ostream& operator<<(std::ostream& out, Vector<T> vctr)
    {
        out << "(" << vctr.getFirstParam() << ", " << vctr.getSecondParam() << ")";
        return out;
    }

    const Vector<int> ZERO_VECTOR = Vector<int>(ZERO, ZERO);
    const Vector<int> ORT_VECTOR = Vector<int>(ONE, ONE);

    template<typename T>
    inline Vector<T>::Vector(Number<T> firstParam, Number<T> secondParam) : firstParam_(firstParam), secondParam_(secondParam) {}
}
