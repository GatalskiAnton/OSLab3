#include <iostream>
#include "vector.h"

int main()
{
    Number<int> one = ONE;
    vector::Vector<int> ort = vector::ORT_VECTOR;
    vector::Vector<int> vec1(Number<int>(10), Number<int>(15));
    vector::Vector<int> vec2(Number<int>(5), Number<int>(5));
    std::cout << vec1 + vec2 + vector::ZERO_VECTOR << '\n';
}
