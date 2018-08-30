/*
*  File: prelim.cpp
*  Date: 8/29/18
*  Author: Mike Cioce
*  Purpose: writes code that prints the name of the current computer to the console
*/
#include <iostream>
#include <unistd.h>

const size_t HOST_NAME_MAX = 64;

int main () {
   char name[HOST_NAME_MAX];
   int success = gethostname(name,HOST_NAME_MAX); //if 0 - success, else failed
   std::cout << name << std::endl;
   return 0;
}
