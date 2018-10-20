#include "frames.hpp"
#include <iostream>

void testVector0()
{
    KDL::Vector v1(1, 1, 1);
    KDL::Vector v2(1, 1, 1);
    KDL::Vector v3 = v1 + v2;
    std::cout << "v3=" << v3[0] << " "
              << v3[1] << " " << v3[2] << std::endl;
    return;
}

void testFrame()
{
    KDL::Frame f1(KDL::Rotation::RotZ(1.0), KDL::Vector(1,0,0));
    KDL::Frame f2(KDL::Rotation::RotZ(1.0), KDL::Vector(1,0,0));
    KDL::Frame f3 = f1 * f2;
    KDL::Frame f4 = f1.Inverse() * f2;
    return;
}

int main()
{
    testVector0();
    return 0;
}
