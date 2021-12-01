#include <iostream>
using namespace std;

#include <limits> // Header file to get maximum precision for float and double
typedef std::numeric_limits< double > dbl; // Declaring maximum precision

int main()

{ 
   float n,init_s=2, sum = 0;
    cout << "Please enter the value for n  : ";
    cin >> n;

	for (int i=1; i<n; i++)
    {
    init_s=init_s*init_s;
    sum = sum+init_s;
    }

 cout.precision(dbl::max_digits10); // Making sure to print max precision.
 cout << "The sum of the series for n = " << n << " is : " << sum ;
 
 return sum;
}


