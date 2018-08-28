/*
*  File: main.cpp
*  Date: 8/28/18
*  Author: Mike Cioce
*  Purpose: tests the namespace concept in c++
*/

#include <iostream>

namespace space1 {
   int x = 1;
}

namespace space2 {
   int x = 2;
}

int x = -1;

int main() {
   x = 4;
   std::cout << x << std::endl;
   std::cout << space1::x << std::endl;
   std::cout << space2::x << std::endl;
}
