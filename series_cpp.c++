
#include<iostream> 
 
extern "C" int int_func(int n) 
  { 
    int init_s=2;
    int sum = 0;
    for (int i=1; i<n; i++)
      {
        init_s=init_s*init_s;
        sum = sum+init_s;
      }
    return sum;
  } 

extern "C" long int long_int_func(int n) 
  { 
    long int init_s=2;
    long int sum = 0;
    for (int i=1; i<n; i++)
      {
        init_s=init_s*init_s;
        sum = sum+init_s;
      }
    return sum;
  } 

extern "C" float float_func(int n) 
  { 
    float init_s=2.0;
    float sum = 0;
    for (int i=1; i<n; i++)
      {
        init_s=init_s*init_s;
        sum = sum+init_s;
      }
    return sum;
  } 
