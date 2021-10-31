#include <iostream>
using namespace std;

int main() {
    int n; 
    float t1 = 2, nextTerm = 0;

    cout << "Enter the largest value of n: ";
    cin >> n;

    cout << "Square Series: ";

    for (int i = 0; i <= n; ++i) {
        // Prints the first term.
        if(i == 0) {
            cout << t1 << ", ";
            continue;
        }
        
        nextTerm = t1 * t1;
        
        t1 = nextTerm;
        
        cout << nextTerm << ", ";
    }
    return 0;
}
