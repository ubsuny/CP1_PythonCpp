#include <cmath>
#include<iostream>

extern "C" int func(int x)
    {
     int f0 = 2;
     int ans = pow(f0,pow(2,x));
     return ans;
    }

