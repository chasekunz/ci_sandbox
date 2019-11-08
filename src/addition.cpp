#include <iostream>
#include "arithmetic.h"

int main(int argc, char*argv[])
{
    double x = 1;
    double y = 2;
    Arithmetic math;
    std::cout << x << " + " << y << " = " << math.add(x,y) << std::endl;
}