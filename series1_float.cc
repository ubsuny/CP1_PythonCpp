#include <iostream>
using namespace std;

int main()

{ 
   float n,init_s=2, sum = 0;
    cout << "Please enter the value for n (max ) : ";
    cin >> n;
    

	for (int i=1; i<n; i++)
    {
    init_s=init_s*init_s;
    sum = sum+init_s;
    }
 
 cout << "The sum of the series for n = " << n << " is : " << sum ;
 
 return 0;
}


