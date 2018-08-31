/*
*  File: pointers.cpp
*  Date: 8/30/18
*  Author: Mike Cioce
*  Purpose: tests concepts of pointers and memory addresses in c++;
*/

#include <iostream>

int main() {
   int x = 1;
   int * xAddress = &x;
   int** pointerAddress = &xAddress;
   std::cout << x << std::endl;
   std::cout << xAddress << std::endl;
   std::cout << pointerAddress << std::endl;
   std::cout << **pointerAddress << std::endl;
   return 0;
}
