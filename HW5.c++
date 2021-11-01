#include <cmath>
#include<iostream>
using namespace std;
/* 
This line "using namespace std;" is needed for the print statement. Found from 
https://stackoverflow.com/questions/15185801/cout-was-not-declared-in-this-scope
*/

extern "C" int findn(int num){

    /*
    This method takes some input number and returns the maximum n value that can be stored.
    num is intended to be the maximum size of a C++ data type.
    
    Input Argument: num must be a number.
    Returns: n is a number.
    */
    int n = 0;
    int f0 = 2;
    while (pow(f0,2) < num) { 
        f0 = pow(f0,2);
        n = n + 1;
    }
    return n;
}
int unsigned_int_n = findn(65535);
int int_n = findn(32768);
int long_int_n = findn(2147483647);

int Print() { 
    /* 
    This is how you could do cases in C++, I will do them in Python instead to demonstrate
    how to use methods from a (shared) library as in Problem 3.
    */
    
    cout << "For the cases of unsigned int, int, and long int" <<endl;
    cout << "For unsigned int, n should be 3: n = " <<  unsigned_int_n << endl;
    cout << "For int, n should be 3: n = " <<  int_n << endl;
    cout << "For long int, n should be 4: n = " <<  long_int_n << endl;
    return 0;
}

extern "C" int value_at_n(int num, int n){
        /*
    This method takes some input number "num" and the step in the series
    and returns the value of the series for at step n.
    
    num is intended to be the maximum size of a C++ data type.
    If the value at the given n value is larger than num (the size of the type),
    it will return 0.
    
    Input Argument: num must be a number. n must be a number.
    Returns: value is a number.
    */
    int f0 = 2;
    int value = pow(f0,pow(2,n));
    if (value > num){
        return 0;
    }
    else{
        return value;
    }
}