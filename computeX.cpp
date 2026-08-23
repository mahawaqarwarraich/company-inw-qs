#include<iostream>
using namespace std;


// compute x if x = y**z;
// How to optimize the brute force algorithm?
// Time complexity: o(logz)
// Negative exponent?
// 

double computeX(int y, int z) {
   double ans = 1;
   int m = z;
   
   if (z < 0) {
     z *= -1;
   }
  
   while (z > 0) {
        if (z%2 != 0) {
            ans *= y;
            z -= 1;
        } else {
            y *= y;
            z /= 2;
        }
   }
   if (m < 0) {
    ans = 1.0/ans;
   }
   return ans;
}

int main() {
    int y = 5;
    int z = -2;

    double res = computeX(y, z);

    cout << res;

    return 0;
}