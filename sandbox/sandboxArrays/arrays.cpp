 /*
 * File: arrays.cpp
 * Date: 8/30/18
 * Author: Mike Cioce
 * Purpose: test concepts of arrays in c++;
 */

#include <iostream>
// #define WIDTH 5
// #define HEIGHT 3
//
// int jimmy [HEIGHT][WIDTH];
// int n,m;
//
// int main ()
// {
//   for (n=0; n<HEIGHT; n++)
//     for (m=0; m<WIDTH; m++)
//     {
//       jimmy[n][m]=(n+1)*(m+1);
//     }
// }
int const m = 5;
int const n = 3;
int x [m][n];

int main () {
   for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
         x[i][j] = i+j;
         std::cout << x[i][j] << std::endl;
      }
   }
   return 0;
}
